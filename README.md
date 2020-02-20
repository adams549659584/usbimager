USBImager
=========

<img src="https://gitlab.com/bztsrc/usbimager/raw/master/src/misc/icon32.png">
[USBImager](https://gitlab.com/bztsrc/usbimager) is a really really simple GUI application that writes compressed disk images to USB drives.
Available platforms: Windows, MacOSX and Linux. Its interface is as simple as it gets, totally bloat-free.

Installation
------------

| Platform | Frontend     | Description                  |
|----------|--------------|------------------------------|
| Windows  | GDI          | the only choice              |
| MacOSX   | Cocoa<br>X11 | recommended<br>compatibility |
| Linux    | X11<br>GTK+  | recommended<br>compatibility (has security issues with accessing raw disks) |

1. download one of the `usbimager-*.zip` archives above for your desktop (approx. 128 Kilobytes each)
2. extract to: `C:\Program Files` (Windows), `/Applications` (MacOSX) or `/usr` (Linux)
3. Enjoy!

You can use the executable in the archive as-is, the other files only provide integration with your desktop (icons and such). It will autodetect your
operating system's language, and if dictionary found, it will greet you in your language.

If you can't write to the target device (you get "permission denied" errors), then use the "Run As Administrator" option under Windows, and add your
user to the "disk" (Linux) or "operator" (MacOSX) group (see "ls -la /dev|grep -e ^b" to find out which group your OS is using). __No need__ for
*sudo /usr/bin/usbimager*, just make sure your user has write access to the block devices, that's the Principle of Least Privilege. This should not be
an issue by the way, as USBImager comes with setgid bit set.

Features
--------

- Open Source and MIT licensed
- Portable executable, no installation needed, just extract the archives
- Small. Really small, few kilobytes only, yet has no dependencies
- No privacy concerns nor advertisements like with etch*r, fully GDPR compatible
- Minimalist, native interface on all platforms
- Tries to be bullet-proof and avoids overwriting of the system disk
- Makes synchronized writes, that is, all data is on disk when the progressbar reaches 100%
- Can verify writing by comparing the disk to the image
- Can read raw disk images: .img, .bin, .raw, .iso, .dd, etc.
- Can read compressed images on-the-fly: .gz, .bz2, .xz
- Can read archives on-the-fly: .zip (PKZIP and ZIP64) (*)

(* - for archives with multiple files, the first file in the archive is used as input)

For X11 I made everything from scratch to avoid dependencies. Clicking and keyboard navigation works as expected: <kbd>Tab</kbd> and <kbd>Shift</kbd> +
<kbd>Tab</kbd> switches the input field, <kbd>Enter</kbd> selects. Plus in Open File dialog <kbd>Left</kbd> / <kbd>BackSpace</kbd> goes one directory up,
<kbd>Right</kbd> / <kbd>Enter</kbd> goes one directory down (or selects it if it's not a directory). You can use <kbd>Shift</kbd> + <kbd>Up</kbd> /
<kbd>Down</kbd> to change the sorting order. "Recently Used" files also supported (through freedesktop.org's Desktop Bookmarks Standard).

Screenshots
-----------

<img src="https://gitlab.com/bztsrc/usbimager/raw/master/usbimager.png">

Compilation
-----------

### Windows

Dependencies: just standard Win32 DLLs, and MinGW for compilation.

1. install [MinGW](https://osdn.net/projects/mingw/releases), this will give you "gcc" and "make" under Windows
2. open MSYS terminal, and in the src directory, run `make`
3. to create the archive, run `make package`

### MacOSX

Dependencies: just standard frameworks (CoreFoundation, IOKit, DiskArbitration and Cocoa), and command line tools (no need for XCode, just the CLI tools).

1. in a Terminal, run `xcode-select --install` and in the pop-up window click "Install". This will give you "gcc" and "make" under MacOSX.
2. in the src directory, run `make`
3. to create the archive, run `make package`

By default USBImager is compiled for native Cocoa with libui (included). You can also compile for X11 (but with Cocoa modals) by using `USE_X11=yes make`.

### Linux

Dependencies: libc, libX11 and standard GNU toolchain.

1. in the src directory, run `make`
2. to create the archive, run `make package`
3. to install, run `sudo make install`

You can also compile for GTK+ by using `USE_LIBUI=yes make`. That'll use libui (included), which in turn relies on hell a lot of libraries (pthread, X11,
wayland, gdk, harfbuzz, pango, cairo, freetype2 etc.) Also note that the GTK version cannot be installed with setgid bit, so that write access to disk
devices cannot be guaranteed. The X11 version gains "disk" group membership on execution automatically. For GTK you'll have to add your user to that group
manually or run USBImager via sudo, otherwise you'll get "permission denied" errors.

Hacking the Source
------------------

To compile with debugging, use `DEBUG=yes make`. This will add extra debugging symbols to the executable.

Editing Makefile and changing `DISKS_TEST` to 1 will add a special `test.bin` "device" to the list on all platforms. You can test the decompressors with this.

X11 uses only low-level X11 (no Xft, Xmu nor any other extensions), so it should be trivial to port to other POSIX systems (like BSD or Minix). It does not
handle locales, but it does use UTF-8 encoding in file names (this only matters for displaying, the file operations can handle any encoding). If you don't
want this, set the `USEUTF8` define to 0 in the beginning of the main_x11.c file.

Known Issues
------------

For MacOSX it would be nice to have a full native main_cocoa.m in Obj-C, because in libui the progress bar is lagging.

Authors
-------

- libui: Pietro Gagliardi
- bzip2: Julian R. Seward
- xz: Igor Pavlov and Lasse Collin
- zlib: Mark Adler
- zip format: bzt (no PKWARE-related lib nor source was used in this project)
- usbimager: bzt

That all,

bzt
