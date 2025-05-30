/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* acroread binary to use. */
#define CUPS_ACROREAD ""

/* CUPS datadir */
#define CUPS_DATADIR "/usr/share/cups"

/* Path to CUPS fonts dir */
#define CUPS_FONTPATH "/usr/share/cups/fonts"

/* gs binary to use */
#define CUPS_GHOSTSCRIPT "gs"

/* mutool binary to use */
#define CUPS_MUTOOL ""

/* max resolution used for pdftops when converting images */
#define CUPS_PDFTOPS_MAX_RESOLUTION 1440

/* Define default renderer */
#define CUPS_PDFTOPS_RENDERER GS

/* pdftocairo binary to use. */
#define CUPS_POPPLER_PDFTOCAIRO ""

/* pdftops binary to use. */
#define CUPS_POPPLER_PDFTOPS ""

/* Path to CUPS binaries dir */
#define CUPS_SERVERBIN "/system/bin/cups"

/* CUPS serverroot */
#define CUPS_SERVERROOT "/etc/cups"

/* Transient run-time state dir of CUPS */
#define CUPS_STATEDIR "/var/run/cups"

/* Define to 1 if translation of program messages to the user's native
   language is requested. */
#define ENABLE_NLS 1

/* Define that we provide acroread binary */
/* #undef HAVE_ACROREAD */

/* Define to 1 if you have the Mac OS X function CFLocaleCopyCurrent in the
   CoreFoundation framework. */
/* #undef HAVE_CFLOCALECOPYCURRENT */

/* Define to 1 if you have the Mac OS X function CFPreferencesCopyAppValue in
   the CoreFoundation framework. */
/* #undef HAVE_CFPREFERENCESCOPYAPPVALUE */

/* define if the compiler supports basic C++11 syntax */
#define HAVE_CXX11 1

/* Define if the GNU dcgettext() function is already present or preinstalled.
   */
#define HAVE_DCGETTEXT 1

/* Define to 1 if you have the <dirent.h> header file. */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <endian.h> header file. */
#define HAVE_ENDIAN_H 1

/* Define to 1 if you have the 'getline' function. */
#define HAVE_GETLINE 1

/* Define if the GNU gettext() function is already present or preinstalled. */
#define HAVE_GETTEXT 1

/* Define that we provide ghostscript binary */
#define HAVE_GHOSTSCRIPT /**/

/* gs supports ps2write */
#define HAVE_GHOSTSCRIPT_PS2WRITE

/* Define if you have the iconv() function and it works. */
#define HAVE_ICONV 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Use libcups2 */
#define HAVE_LIBCUPS2 1

/* Define to 1 if you have the 'z' library (-lz). */
#define HAVE_LIBZ 1

/* Platform supports long long type */
#define HAVE_LONG_LONG /**/

/* Define that we provide mutool binary */
/* #undef HAVE_MUTOOL */

/* Define to 1 if you have the 'open_memstream' function. */
#define HAVE_OPEN_MEMSTREAM 1

/* Define that we provide pdftocairo binary */
/* #undef HAVE_PDFTOCAIRO */

/* Define that we provide poppler pdftops. */
/* #undef HAVE_POPPLER_PDFTOPS */

/* pdftops supports -origpagesizes. */
/* #undef HAVE_POPPLER_PDFTOPS_WITH_ORIGPAGESIZES */

/* pdftops supports -r argument. */
/* #undef HAVE_POPPLER_PDFTOPS_WITH_RESOLUTION */

/* Define to 1 if you have the 'sigaction' function. */
#define HAVE_SIGACTION 1

/* Define to 1 if you have the 'snprintf' function. */
#define HAVE_SNPRINTF 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the 'strcasestr' function. */
#define HAVE_STRCASESTR 1

/* Define to 1 if you have the 'strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the 'strlcat' function. */
#define HAVE_STRLCAT 1

/* Define to 1 if you have the 'strlcpy' function. */
#define HAVE_STRLCPY 1

/* Define to 1 if you have the 'strtoll' function. */
#define HAVE_STRTOLL 1

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the 'vsnprintf' function. */
#define HAVE_VSNPRINTF 1

/* Define to 1 if you have the 'wait3' function. */
#define HAVE_WAIT3 1

/* Define to 1 if you have the 'waitpid' function. */
#define HAVE_WAITPID 1

/* Define as const if the declaration of iconv() needs const. */
#define ICONV_CONST 

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Name of package */
#define PACKAGE "libppd"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "https://github.com/OpenPrinting/libppd/issues"

/* Define to the full name of this package. */
#define PACKAGE_NAME "libppd"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "libppd 2.1.1"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "libppd"

/* Define to the home page for this package. */
#define PACKAGE_URL "https://github.com/OpenPrinting/libppd/"

/* Define to the version of this package. */
#define PACKAGE_VERSION "2.1.1"

/* ppdc include dir */
#define PPDC_DATADIR "/usr/share/ppdc"

/* Define to 1 if all of the C89 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#define STDC_HEADERS 1

/* Version number of package */
#define VERSION "2.1.1"

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define to 1 on platforms where this makes off_t a 64-bit type. */
/* #undef _LARGE_FILES */

/* Number of bits in time_t, on hosts where this is settable. */
/* #undef _TIME_BITS */

/* Define to 1 on platforms where this makes time_t a 64-bit type. */
/* #undef __MINGW_USE_VC2005_COMPAT */


#ifdef HAVE_LONG_LONG
#  define CUPS_LLFMT   "%lld"
#  define CUPS_LLCAST  (long long)
#else
#  define CUPS_LLFMT   "%ld"
#  define CUPS_LLCAST  (long)
#endif /* HAVE_LONG_LONG */

#ifdef HAVE_ARC4RANDOM
#  define CUPS_RAND() arc4random()
#  define CUPS_SRAND(v) arc4random_stir()
#elif defined(HAVE_RANDOM)
#  define CUPS_RAND() random()
#  define CUPS_SRAND(v) srandom(v)
#elif defined(HAVE_LRAND48)
#  define CUPS_RAND() lrand48()
#  define CUPS_SRAND(v) srand48(v)
#else
#  define CUPS_RAND() rand()
#  define CUPS_SRAND(v) srand(v)
#endif /* HAVE_ARC4RANDOM */

