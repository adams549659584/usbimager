/*
 * usbimager/disks.h
 *
 * Copyright (C) 2020 bzt (bztsrc@gitlab)
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * @brief Disk iteration and umount routines
 *
 */

#include <stdio.h>

#define DISKS_MAX 32

/*** External resources ***/
extern int verbose;
extern int disks_targets[DISKS_MAX];
extern char *main_errorMessage;
void main_addToCombobox(char *option);
void main_getErrorMessage();

/**
 * Refresh target device list in the combobox
 * Should set disks_targets[] and call main_addToCombobox()
 */
void disks_refreshlist();

/**
 * Lock, umount and open the target disk for writing
 * this returns FD on unices, and HANDLE on Windows
 */
void *disks_open(int targetId);

/**
 * Close the target disk
 * Receives FD or HANDLE
 */
void disks_close(void *ctx);