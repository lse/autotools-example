AC_PREREQ(2.60)
AC_INIT([example],
	[1.0],
	[gabriel@lse.epita.fr],
	[example],
	[https://lse.epita.fr/])

AC_CONFIG_SRCDIR([src/example.c])
AC_CONFIG_AUX_DIR([build-aux])
AM_INIT_AUTOMAKE([
		  foreign
		  -Wall
		  silent-rules
		  subdir-objects
])

AC_PROG_CC_C99
AC_USE_SYSTEM_EXTENSIONS

AM_SILENT_RULES([yes])

AX_PTHREAD
if test "x$ax_pthread_ok" = xno; then
	AC_MSG_ERROR([$PACKAGE requires pthreads])
fi

test -z "$PTHREAD_LIBS" && PTHREAD_LIBS="-lpthread"

my_CFLAGS="\
-Wall \
-Wextra \
-pedantic \
-Werror \
"

AC_SUBST([my_CFLAGS])

AC_CONFIG_HEADERS(config.h)
AC_CONFIG_FILES([Makefile])

AC_OUTPUT
AC_MSG_RESULT([
	$PACKAGE $VERSION
	====================

	prefix:		${prefix}
	compiler:	${CC}
	cflags:		${CFLAGS}
	ldflags:	${LDFLAGS}
])
