/* SPDX-License-Identifier: BSD-2-Clause */

/**
 * @file
 *
 * @ingroup RTEMSScoreTLS
 *
 * @brief This header file provides the interfaces of the
 *   @ref RTEMSScoreTLS.
 */

/*
 * Copyright (c) 2014 embedded brains GmbH.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _RTEMS_SCORE_TLS_H
#define _RTEMS_SCORE_TLS_H

#include <rtems/score/cpu.h>

#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/**
 * @defgroup RTEMSScoreTLS Thread-Local Storage (TLS)
 *
 * @ingroup RTEMSScore
 *
 * @brief This group contains the implementation to support thread-local
 *   storage (TLS).
 *
 * Variants I and II are according to Ulrich Drepper, "ELF Handling For
 * Thread-Local Storage".
 *
 * @{
 */

extern char _TLS_Data_begin[];

extern char _TLS_Data_end[];

extern char _TLS_Data_size[];

extern char _TLS_BSS_begin[];

extern char _TLS_BSS_end[];

extern char _TLS_BSS_size[];

extern char _TLS_Size[];

/**
 * @brief The TLS section alignment.
 *
 * This symbol is provided by the linker command file as the maximum alignment
 * of the .tdata and .tbss sections.  The linker ensures that the first TLS
 * output section is aligned to the maximum alignment of all TLS output
 * sections, see function _bfd_elf_tls_setup() in bfd/elflink.c of the GNU
 * Binutils sources.  The linker command file must take into account the case
 * that the .tdata section is empty and the .tbss section is non-empty.
 */
extern char _TLS_Alignment[];

typedef struct {
  /*
   * FIXME: Not sure if the generation number type is correct for all
   * architectures.
  */
  uint32_t generation_number;

  void *tls_blocks[1];
} TLS_Dynamic_thread_vector;

typedef struct TLS_Thread_control_block {
#ifdef __i386__
  struct TLS_Thread_control_block *tcb;
#else /* !__i386__ */
  TLS_Dynamic_thread_vector *dtv;
/*
 * GCC under AArch64/LP64 expects a 16 byte TCB at the beginning of the TLS
 * data segment and indexes into it accordingly for TLS variable addresses.
 */
#if CPU_SIZEOF_POINTER == 4 || defined(AARCH64_MULTILIB_ARCH_V8)
  uintptr_t reserved;
#endif
#endif /* __i386__ */
} TLS_Thread_control_block;

typedef struct {
  uintptr_t module;
  uintptr_t offset;
} TLS_Index;

/**
 * @brief Gets the TLS size.
 *
 * @return The TLS size.
 */
static inline uintptr_t _TLS_Get_size( void )
{
  uintptr_t size;

  /*
   * We must be careful with using _TLS_Size here since this could lead GCC to
   * assume that this symbol is not 0 and the tests for 0 will be optimized
   * away.
   */
  size = (uintptr_t) _TLS_Size;
  RTEMS_OBFUSCATE_VARIABLE( size );
  return size;
}

/**
 * @brief Returns the value aligned up to the stack alignment.
 *
 * @param val The value to align.
 *
 * @return The value aligned to the stack alignment.
 */
static inline uintptr_t _TLS_Align_up( uintptr_t val )
{
  uintptr_t alignment = CPU_STACK_ALIGNMENT;

  return RTEMS_ALIGN_UP( val, alignment );
}

/**
 * @brief Returns the size of the thread control block area size for this
 *      alignment, or the minimum size if alignment is too small.
 *
 * @param alignment The alignment for the operation.
 *
 * @return The size of the thread control block area.
 */
static inline uintptr_t _TLS_Get_thread_control_block_area_size(
  uintptr_t alignment
)
{
  return alignment <= sizeof(TLS_Thread_control_block) ?
    sizeof(TLS_Thread_control_block) : alignment;
}

/**
 * @brief Return the TLS area allocation size.
 *
 * @return The TLS area allocation size.
 */
uintptr_t _TLS_Get_allocation_size( void );

/**
 * @brief Copies TLS size bytes from the address tls_area and returns a pointer
 *      to the start of the area after clearing it.
 *
 * @param tls_area The starting address of the area to clear.
 *
 * @return The pointer to the beginning of the cleared section.
 */
static inline void *_TLS_Copy_and_clear( void *tls_area )
{
  tls_area = memcpy(
    tls_area,
    _TLS_Data_begin,
    (size_t) ((uintptr_t)_TLS_Data_size)
  );


  memset(
    (char *) tls_area + (size_t)((intptr_t) _TLS_BSS_begin) -
      (size_t)((intptr_t) _TLS_Data_begin),
    0,
    ((size_t) (intptr_t)_TLS_BSS_size)
  );

  return tls_area;
}

/**
 * @brief Initializes the dynamic thread vector.
 *
 * @param tls_block The tls block for @a dtv.
 * @param tcb The thread control block for @a dtv.
 * @param[out] dtv The dynamic thread vector to initialize.
 *
 * @return Pointer to an area that was copied and cleared from tls_block
 *       onwards (@see _TLS_Copy_and_clear).
 */
static inline void *_TLS_Initialize(
  void *tls_block,
  TLS_Thread_control_block *tcb,
  TLS_Dynamic_thread_vector *dtv
)
{
#ifdef __i386__
  (void) dtv;
  tcb->tcb = tcb;
#else
  tcb->dtv = dtv;
  dtv->generation_number = 1;
  dtv->tls_blocks[0] = tls_block;
#endif

  return _TLS_Copy_and_clear( tls_block );
}

/**
 * @brief Initializes a dynamic thread vector beginning at the given starting
 *      address.
 *
 * Use Variant I, TLS offsets emitted by linker takes the TCB into account.
 *
 * @param tls_area The tls area for the initialization.
 *
 * @return Pointer to an area that was copied and cleared from tls_block
 *       onwards (@see _TLS_Copy_and_clear).
 */
static inline void *_TLS_TCB_at_area_begin_initialize( void *tls_area )
{
  void *tls_block = (char *) tls_area
    + _TLS_Get_thread_control_block_area_size( (uintptr_t) _TLS_Alignment );
  TLS_Thread_control_block *tcb = (TLS_Thread_control_block *) tls_area;
  uintptr_t aligned_size = _TLS_Align_up( (uintptr_t) _TLS_Size );
  TLS_Dynamic_thread_vector *dtv = (TLS_Dynamic_thread_vector *)
    ((char *) tls_block + aligned_size);

  return _TLS_Initialize( tls_block, tcb, dtv );
}

/**
 * @brief Initializes a dynamic thread vector with the area before a given
 * starting address as thread control block.
 *
 * Use Variant I, TLS offsets emitted by linker neglects the TCB.
 *
 * @param tls_area The tls area for the initialization.
 *
 * @return Pointer to an area that was copied and cleared from tls_block
 *       onwards (@see _TLS_Copy_and_clear).
 */
static inline void *_TLS_TCB_before_TLS_block_initialize( void *tls_area )
{
  void *tls_block = (char *) tls_area
    + _TLS_Get_thread_control_block_area_size( (uintptr_t) _TLS_Alignment );
  TLS_Thread_control_block *tcb = (TLS_Thread_control_block *)
    ((char *) tls_block - sizeof(*tcb));
  uintptr_t aligned_size = _TLS_Align_up( (uintptr_t) _TLS_Size );
  TLS_Dynamic_thread_vector *dtv = (TLS_Dynamic_thread_vector *)
    ((char *) tls_block + aligned_size);

  return _TLS_Initialize( tls_block, tcb, dtv );
}

/**
 * @brief Initializes a dynamic thread vector with the area after a given
 * starting address as thread control block.
 *
 * Use Variant II
 *
 * @param tls_area The tls area for the initialization.
 *
 * @return Pointer to an area that was copied and cleared from tls_block
 *       onwards (@see _TLS_Copy_and_clear).
 */
static inline void *_TLS_TCB_after_TLS_block_initialize( void *tls_area )
{
  uintptr_t size = (uintptr_t) _TLS_Size;
  uintptr_t tls_align = (uintptr_t) _TLS_Alignment;
  uintptr_t tls_mask = tls_align - 1;
  uintptr_t heap_align = _TLS_Align_up( tls_align );
  uintptr_t heap_mask = heap_align - 1;
  TLS_Thread_control_block *tcb = (TLS_Thread_control_block *)
    ((char *) tls_area + ((size + heap_mask) & ~heap_mask));
  void *tls_block = (char *) tcb - ((size + tls_mask) & ~tls_mask);
  TLS_Dynamic_thread_vector *dtv = (TLS_Dynamic_thread_vector *)
    ((char *) tcb + sizeof(*tcb));

  _TLS_Initialize( tls_block, tcb, dtv );

  return tcb;
}

/** @} */

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _RTEMS_SCORE_TLS_H */
