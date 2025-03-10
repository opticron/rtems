/* SPDX-License-Identifier: BSD-2-Clause */

/**
 * @file
 *
 * RTEMS Shell Command Set Configuration
 */

/*
 *  COPYRIGHT (c) 1989-2012.
 *  On-Line Applications Research Corporation (OAR).
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

#ifndef _RTEMS_SHELL_CONFIG_h
#define _RTEMS_SHELL_CONFIG_h

#include <rtems/shell.h>

/*
 *  Externs for all command definition structures
 */
extern rtems_shell_cmd_t rtems_shell_HELP_Command;
extern rtems_shell_cmd_t rtems_shell_ALIAS_Command;
extern rtems_shell_cmd_t rtems_shell_TIME_Command;
extern rtems_shell_cmd_t rtems_shell_CMDLS_Command;
extern rtems_shell_cmd_t rtems_shell_CMDCHOWN_Command;
extern rtems_shell_cmd_t rtems_shell_CMDCHMOD_Command;
extern rtems_shell_cmd_t rtems_shell_LOGOFF_Command;
extern rtems_shell_cmd_t rtems_shell_SETENV_Command;
extern rtems_shell_cmd_t rtems_shell_GETENV_Command;
extern rtems_shell_cmd_t rtems_shell_UNSETENV_Command;

extern rtems_shell_cmd_t rtems_shell_MDUMP_Command;
extern rtems_shell_cmd_t rtems_shell_WDUMP_Command;
extern rtems_shell_cmd_t rtems_shell_LDUMP_Command;
extern rtems_shell_cmd_t rtems_shell_MEDIT_Command;
extern rtems_shell_cmd_t rtems_shell_MFILL_Command;
extern rtems_shell_cmd_t rtems_shell_MMOVE_Command;

extern rtems_shell_cmd_t rtems_shell_JOEL_Command;
extern rtems_shell_cmd_t rtems_shell_DATE_Command;
extern rtems_shell_cmd_t rtems_shell_ECHO_Command;
extern rtems_shell_cmd_t rtems_shell_EDIT_Command;
extern rtems_shell_cmd_t rtems_shell_SLEEP_Command;
extern rtems_shell_cmd_t rtems_shell_ID_Command;
extern rtems_shell_cmd_t rtems_shell_TTY_Command;
extern rtems_shell_cmd_t rtems_shell_WHOAMI_Command;

extern rtems_shell_cmd_t rtems_shell_CP_Command;
extern rtems_shell_cmd_t rtems_shell_PWD_Command;
extern rtems_shell_cmd_t rtems_shell_LS_Command;
extern rtems_shell_cmd_t rtems_shell_CHDIR_Command;
extern rtems_shell_cmd_t rtems_shell_MKDIR_Command;
extern rtems_shell_cmd_t rtems_shell_RMDIR_Command;
extern rtems_shell_cmd_t rtems_shell_CHROOT_Command;
extern rtems_shell_cmd_t rtems_shell_CHMOD_Command;
extern rtems_shell_cmd_t rtems_shell_CAT_Command;
extern rtems_shell_cmd_t rtems_shell_MKRFS_Command;
extern rtems_shell_cmd_t rtems_shell_MSDOSFMT_Command;
extern rtems_shell_cmd_t rtems_shell_MSDOSFMT_Alias;
extern rtems_shell_cmd_t rtems_shell_MV_Command;
extern rtems_shell_cmd_t rtems_shell_RM_Command;
extern rtems_shell_cmd_t rtems_shell_LN_Command;
extern rtems_shell_cmd_t rtems_shell_MKNOD_Command;
extern rtems_shell_cmd_t rtems_shell_UMASK_Command;
extern rtems_shell_cmd_t rtems_shell_LSOF_Command;
extern rtems_shell_cmd_t rtems_shell_MOUNT_Command;
extern rtems_shell_cmd_t rtems_shell_UNMOUNT_Command;
extern rtems_shell_cmd_t rtems_shell_BLKSYNC_Command;
extern rtems_shell_cmd_t rtems_shell_BLKSTATS_Command;
extern rtems_shell_cmd_t rtems_shell_FDISK_Command;
extern rtems_shell_cmd_t rtems_shell_DD_Command;
extern rtems_shell_cmd_t rtems_shell_HEXDUMP_Command;
extern rtems_shell_cmd_t rtems_shell_DEBUGRFS_Command;
extern rtems_shell_cmd_t rtems_shell_DF_Command;
extern rtems_shell_cmd_t rtems_shell_MD5_Command;

extern rtems_shell_cmd_t rtems_shell_RTC_Command;
extern rtems_shell_cmd_t rtems_shell_SPI_Command;
extern rtems_shell_cmd_t rtems_shell_I2CDETECT_Command;
extern rtems_shell_cmd_t rtems_shell_I2CGET_Command;
extern rtems_shell_cmd_t rtems_shell_I2CSET_Command;

extern rtems_shell_cmd_t rtems_shell_SHUTDOWN_Command;
extern rtems_shell_cmd_t rtems_shell_CPUINFO_Command;
extern rtems_shell_cmd_t rtems_shell_CPUUSE_Command;
extern rtems_shell_cmd_t rtems_shell_TOP_Command;
extern rtems_shell_cmd_t rtems_shell_STACKUSE_Command;
extern rtems_shell_cmd_t rtems_shell_PERIODUSE_Command;
extern rtems_shell_cmd_t rtems_shell_PROFREPORT_Command;
extern rtems_shell_cmd_t rtems_shell_WKSPACE_INFO_Command;
extern rtems_shell_cmd_t rtems_shell_RTEMS_Command;
extern rtems_shell_cmd_t rtems_shell_MALLOC_INFO_Command;
extern rtems_shell_cmd_t rtems_shell_RTRACE_Command;
#if RTEMS_NETWORKING
  extern rtems_shell_cmd_t rtems_shell_IFCONFIG_Command;
  extern rtems_shell_cmd_t rtems_shell_ROUTE_Command;
  extern rtems_shell_cmd_t rtems_shell_NETSTATS_Command;
  extern rtems_shell_cmd_t rtems_shell_PING_Command;
#endif

/*
 *  Extern for System commands
 */
extern rtems_shell_cmd_t rtems_shell_DRVMGR_Command;
extern rtems_shell_cmd_t rtems_shell_PCI_Command;

extern rtems_shell_cmd_t * const rtems_shell_Initial_commands[];

/*
 *  Extern for alias commands
 */
extern rtems_shell_alias_t rtems_shell_DIR_Alias;
extern rtems_shell_alias_t rtems_shell_CD_Alias;
extern rtems_shell_alias_t rtems_shell_EXIT_Alias;

extern rtems_shell_alias_t * const rtems_shell_Initial_aliases[];

/*
 *  If we are configured to alias a command, then make sure the underlying
 *  command is configured.
 */

#if !defined(CONFIGURE_SHELL_COMMANDS_ALL)
  #if defined(CONFIGURE_SHELL_COMMANDS_DIR) && \
      !defined(CONFIGURE_SHELL_COMMANDS_LS)
    #define CONFIGURE_SHELL_COMMAND_LS
  #endif

  #if defined(CONFIGURE_SHELL_COMMANDS_CD) && \
      !defined(CONFIGURE_SHELL_COMMANDS_CHDIR)
    #define CONFIGURE_SHELL_COMMAND_CHDIR
  #endif

  #if defined(CONFIGURE_SHELL_COMMANDS_EXIT) && \
      !defined(CONFIGURE_SHELL_COMMANDS_LOGOFF)
    #define CONFIGURE_SHELL_COMMAND_LOGOFF
  #endif
#endif

#if defined(CONFIGURE_SHELL_COMMANDS_INIT)
  rtems_shell_alias_t * const rtems_shell_Initial_aliases[] = {
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_DIR)) || \
        defined(CONFIGURE_SHELL_COMMAND_DIR)
      &rtems_shell_DIR_Alias,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_CD)) || \
        defined(CONFIGURE_SHELL_COMMAND_CD)
      &rtems_shell_CD_Alias,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_EXIT)) || \
        defined(CONFIGURE_SHELL_COMMAND_EXIT)
      &rtems_shell_EXIT_Alias,
    #endif

    /*
     *  User defined shell aliases
     */
    #if defined(CONFIGURE_SHELL_USER_ALIASES)
      CONFIGURE_SHELL_USER_ALIASES,
    #endif
    NULL
  };

  rtems_shell_cmd_t * const rtems_shell_Initial_commands[] = {
    /*
     *  General comamnds that should be present
     */
    &rtems_shell_HELP_Command,
    &rtems_shell_ALIAS_Command,
    &rtems_shell_TIME_Command,

    /*
     *  Common commands that can be optional
     */
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_CMDLS)) || \
        defined(CONFIGURE_SHELL_COMMAND_CMDLS)
      &rtems_shell_CMDLS_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_CMDCHOWN)) || \
        defined(CONFIGURE_SHELL_COMMAND_CMDCHOWN)
      &rtems_shell_CMDCHOWN_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_CMDCHMOD)) || \
        defined(CONFIGURE_SHELL_COMMAND_CMDCHMOD)
      &rtems_shell_CMDCHMOD_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_JOEL)) || \
        defined(CONFIGURE_SHELL_COMMAND_JOEL)
      &rtems_shell_JOEL_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_DATE)) || \
        defined(CONFIGURE_SHELL_COMMAND_DATE)
      &rtems_shell_DATE_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_ECHO)) || \
        defined(CONFIGURE_SHELL_COMMAND_ECHO)
      &rtems_shell_ECHO_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_EDIT)) || \
        defined(CONFIGURE_SHELL_COMMAND_EDIT)
      &rtems_shell_EDIT_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_SLEEP)) || \
        defined(CONFIGURE_SHELL_COMMAND_SLEEP)
      &rtems_shell_SLEEP_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_ID)) || \
        defined(CONFIGURE_SHELL_COMMAND_ID)
      &rtems_shell_ID_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_TTY)) || \
        defined(CONFIGURE_SHELL_COMMAND_TTY)
      &rtems_shell_TTY_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_WHOAMI)) || \
        defined(CONFIGURE_SHELL_COMMAND_WHOAMI)
      &rtems_shell_WHOAMI_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_LOGOFF)) || \
        defined(CONFIGURE_SHELL_COMMAND_LOGOFF)
      &rtems_shell_LOGOFF_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_SETENV)) || \
        defined(CONFIGURE_SHELL_COMMAND_SETENV)
      &rtems_shell_SETENV_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_GETENV)) || \
        defined(CONFIGURE_SHELL_COMMAND_GETENV)
      &rtems_shell_GETENV_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_CRLENV)) || \
        defined(CONFIGURE_SHELL_COMMAND_UNSETENV)
      &rtems_shell_UNSETENV_Command,
    #endif

    /*
     *  Memory printing/modification family commands
     */
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
        !defined(CONFIGURE_SHELL_NO_COMMAND_MDUMP)) || \
        defined(CONFIGURE_SHELL_COMMAND_MDUMP)
      &rtems_shell_MDUMP_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_WDUMP)) || \
        defined(CONFIGURE_SHELL_COMMAND_WDUMP)
      &rtems_shell_WDUMP_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_LDUMP)) || \
        defined(CONFIGURE_SHELL_COMMAND_LDUMP)
      &rtems_shell_LDUMP_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_MEDIT)) || \
        defined(CONFIGURE_SHELL_COMMAND_MEDIT)
      &rtems_shell_MEDIT_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_MFILL)) || \
        defined(CONFIGURE_SHELL_COMMAND_MFILL)
      &rtems_shell_MFILL_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_MMOVE)) || \
        defined(CONFIGURE_SHELL_COMMAND_MMOVE)
      &rtems_shell_MMOVE_Command,
    #endif

    /*
     *  File and directory commands
     */
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_CP)) || \
        defined(CONFIGURE_SHELL_COMMAND_CP)
      &rtems_shell_CP_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_PWD)) || \
        defined(CONFIGURE_SHELL_COMMAND_PWD)
      &rtems_shell_PWD_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_LS)) || \
        defined(CONFIGURE_SHELL_COMMAND_LS)
      &rtems_shell_LS_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_CHDIR)) || \
        defined(CONFIGURE_SHELL_COMMAND_CHDIR)
      &rtems_shell_CHDIR_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_MKDIR)) || \
        defined(CONFIGURE_SHELL_COMMAND_MKDIR)
      &rtems_shell_MKDIR_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_RMDIR)) || \
        defined(CONFIGURE_SHELL_COMMAND_RMDIR)
      &rtems_shell_RMDIR_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_CHROOT)) || \
        defined(CONFIGURE_SHELL_COMMAND_CHROOT)
      &rtems_shell_CHROOT_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_CHMOD)) || \
        defined(CONFIGURE_SHELL_COMMAND_CHMOD)
      &rtems_shell_CHMOD_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_CAT)) || \
        defined(CONFIGURE_SHELL_COMMAND_CAT)
      &rtems_shell_CAT_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_MKRFS)) || \
        defined(CONFIGURE_SHELL_COMMAND_MKRFS)
      &rtems_shell_MKRFS_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_MSDOSFMT)) || \
        defined(CONFIGURE_SHELL_COMMAND_MSDOSFMT)
      &rtems_shell_MSDOSFMT_Command,
      &rtems_shell_MSDOSFMT_Alias,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_MV)) || \
        defined(CONFIGURE_SHELL_COMMAND_MV)
      &rtems_shell_MV_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_RM)) || \
        defined(CONFIGURE_SHELL_COMMAND_RM)
      &rtems_shell_RM_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_LN)) || \
        defined(CONFIGURE_SHELL_COMMAND_LN)
      &rtems_shell_LN_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_MKNOD)) || \
        defined(CONFIGURE_SHELL_COMMAND_MKNOD)
      &rtems_shell_MKNOD_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_UMASK)) || \
        defined(CONFIGURE_SHELL_COMMAND_UMASK)
      &rtems_shell_UMASK_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_LSOF)) || \
        defined(CONFIGURE_SHELL_COMMAND_LSOF)
      &rtems_shell_LSOF_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_MOUNT)) || \
        defined(CONFIGURE_SHELL_COMMAND_MOUNT)
      &rtems_shell_MOUNT_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_UNMOUNT)) || \
        defined(CONFIGURE_SHELL_COMMAND_UNMOUNT)
      &rtems_shell_UNMOUNT_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_BLKSYNC)) || \
        defined(CONFIGURE_SHELL_COMMAND_BLKSYNC)
      &rtems_shell_BLKSYNC_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_BLKSTATS)) || \
        defined(CONFIGURE_SHELL_COMMAND_BLKSTATS)
      &rtems_shell_BLKSTATS_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_FDISK)) || \
        defined(CONFIGURE_SHELL_COMMAND_FDISK)
      &rtems_shell_FDISK_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_DD)) || \
        defined(CONFIGURE_SHELL_COMMAND_DD)
      &rtems_shell_DD_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_HEXDUMP)) || \
        defined(CONFIGURE_SHELL_COMMAND_HEXDUMP)
      &rtems_shell_HEXDUMP_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_DEBUGRFS)) || \
        defined(CONFIGURE_SHELL_COMMAND_DEBUGRFS)
      &rtems_shell_DEBUGRFS_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_DF)) || \
        defined(CONFIGURE_SHELL_COMMAND_DF)
      &rtems_shell_DF_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_MD5)) || \
        defined(CONFIGURE_SHELL_COMMAND_MD5)
      &rtems_shell_MD5_Command,
    #endif

    /*
     *  RTEMS Related commands
     */
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_SHUTDOWN)) || \
        defined(CONFIGURE_SHELL_COMMAND_SHUTDOWN)
      &rtems_shell_SHUTDOWN_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_CPUINFO)) || \
        defined(CONFIGURE_SHELL_COMMAND_CPUINFO)
      &rtems_shell_CPUINFO_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_CPUUSE)) || \
        defined(CONFIGURE_SHELL_COMMAND_CPUUSE)
      &rtems_shell_CPUUSE_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_TOP)) || \
        defined(CONFIGURE_SHELL_COMMAND_TOP)
      &rtems_shell_TOP_Command,
    #endif
     #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_STACKUSE)) || \
        defined(CONFIGURE_SHELL_COMMAND_STACKUSE)
      &rtems_shell_STACKUSE_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_PERIODUSE)) || \
        defined(CONFIGURE_SHELL_COMMAND_PERIODUSE)
      &rtems_shell_PERIODUSE_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_PROFREPORT)) || \
        defined(CONFIGURE_SHELL_COMMAND_PROFREPORT)
      &rtems_shell_PROFREPORT_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_WKSPACE_INFO)) || \
        defined(CONFIGURE_SHELL_COMMAND_WKSPACE_INFO)
      &rtems_shell_WKSPACE_INFO_Command,
    #endif
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_RTEMS)) || \
        defined(CONFIGURE_SHELL_COMMAND_RTEMS)
      &rtems_shell_RTEMS_Command,
    #endif

    /*
     *  Malloc family commands
     */
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_MALLOC_INFO)) || \
        defined(CONFIGURE_SHELL_COMMAND_MALLOC_INFO)
      &rtems_shell_MALLOC_INFO_Command,
    #endif

    /*
     *  Tracing family commands
     */
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
         !defined(CONFIGURE_SHELL_NO_COMMAND_RTRACE)) || \
        defined(CONFIGURE_SHELL_COMMAND_RTRACE)
      &rtems_shell_RTRACE_Command,
    #endif

    /*
     *  Network related commands
     */
    #if RTEMS_NETWORKING
      #if (defined(CONFIGURE_SHELL_COMMANDS_ALL_NETWORKING) && \
           !defined(CONFIGURE_SHELL_NO_COMMAND_IFCONFIG)) || \
          defined(CONFIGURE_SHELL_COMMAND_IFCONFIG)
        &rtems_shell_IFCONFIG_Command,
      #endif

      #if (defined(CONFIGURE_SHELL_COMMANDS_ALL_NETWORKING) && \
           !defined(CONFIGURE_SHELL_NO_COMMAND_ROUTE)) || \
          defined(CONFIGURE_SHELL_COMMAND_ROUTE)
        &rtems_shell_ROUTE_Command,
      #endif

      #if (defined(CONFIGURE_SHELL_COMMANDS_ALL_NETWORKING) && \
           !defined(CONFIGURE_SHELL_NO_COMMAND_NETSTATS)) || \
          defined(CONFIGURE_SHELL_COMMAND_NETSTATS)
        &rtems_shell_NETSTATS_Command,
      #endif

      #if (defined(CONFIGURE_SHELL_COMMANDS_ALL_NETWORKING) && \
           !defined(CONFIGURE_SHELL_NO_COMMAND_PING)) || \
          defined(CONFIGURE_SHELL_COMMAND_PING)
        &rtems_shell_PING_Command,
      #endif
    #endif

    /* Miscanellous shell commands */
    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) \
          && !defined(CONFIGURE_SHELL_NO_COMMAND_RTC)) \
        || defined(CONFIGURE_SHELL_COMMAND_RTC)
      &rtems_shell_RTC_Command,
    #endif

    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) \
          && !defined(CONFIGURE_SHELL_NO_COMMAND_SPI)) \
        || defined(CONFIGURE_SHELL_COMMAND_SPI)
      &rtems_shell_SPI_Command,
    #endif

    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) \
          && !defined(CONFIGURE_SHELL_NO_COMMAND_I2CDETECT)) \
        || defined(CONFIGURE_SHELL_COMMAND_I2CDETECT)
      &rtems_shell_I2CDETECT_Command,
    #endif

    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) \
          && !defined(CONFIGURE_SHELL_NO_COMMAND_I2CGET)) \
        || defined(CONFIGURE_SHELL_COMMAND_I2CGET)
      &rtems_shell_I2CGET_Command,
    #endif

    #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) \
          && !defined(CONFIGURE_SHELL_NO_COMMAND_I2CSET)) \
        || defined(CONFIGURE_SHELL_COMMAND_I2CSET)
      &rtems_shell_I2CSET_Command,
    #endif

    /*
     *  System related commands
     */
    #if defined(RTEMS_DRVMGR_STARTUP) || defined(CONFIGURE_SHELL_COMMAND_DRVMGR)
      #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
           !defined(CONFIGURE_SHELL_NO_COMMAND_DRVMGR)) || \
          defined(CONFIGURE_SHELL_COMMAND_DRVMGR)
        &rtems_shell_DRVMGR_Command,
      #endif
    #endif

    #if defined(RTEMS_PCI_CONFIG_LIB)
      #if (defined(CONFIGURE_SHELL_COMMANDS_ALL) && \
           !defined(CONFIGURE_SHELL_NO_COMMAND_PCI)) || \
          defined(CONFIGURE_SHELL_COMMAND_PCI)
        &rtems_shell_PCI_Command,
      #endif
    #endif

    /*
     *  User defined shell commands
     */
    #if defined(CONFIGURE_SHELL_USER_COMMANDS)
      CONFIGURE_SHELL_USER_COMMANDS,
    #endif
    NULL
  };

#endif

#endif
