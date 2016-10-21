ACLOCAL_AMFLAGS = -I m4 ${ACLOCAL_FLAGS}
AM_MAKEFLAGS = --no-print-directory

AM_CPPFLAGS = \
	      -include $(top_builddir)/config.h \
	      -D_GNU_SOURCE \
	      -I${top_srcdir}/src

AM_CFLAGS = $(my_CFLAGS)

bin_PROGRAMS = example

example_SOURCES = \
		  src/example.c \
		  src/thread.c \
		  src/thread.h

example_LDADD = $(PTHREAD_LIBS)
