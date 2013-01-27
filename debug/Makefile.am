BUILDTOP=..
TOPLEVEL=${srcdir}/..
TOOLDIR=${TOPLEVEL}/tools

LIBDIR=${TOPLEVEL}/lib
INCDIR=${TOPLEVEL}/include/

AM_CPPFLAGS = -g -O1 -I$(TOPLEVEL)/include -I$(BUILDTOP)/include -I$(TOOLDIR) -DTOPDIR=\"${abs_top_srcdir}\"

SOURCES = ${INCDIR}/Protocol/Protocol.h \
        ${INCDIR}/Protocol/SSL.h \
        ${LIBDIR}/Protocol/SSL.cpp

noinst_LTLIBRARIES = ../lib/libtransport.la

___lib_libtransport_la_SOURCES = ${SOURCES}

___lib_libtransport_la_DEPENDENCIES = ${SOURCES}

bin_PROGRAMS = groovim

groovim_CPPFLAGS = -g -O1 -I$(TOPLEVEL)/include -I$(BUILDTOP)/include -I$(TOOLDIR) -DTOPDIR=\"${abs_top_srcdir}\"

groovim_LDFLAGS =  -lssl

groovim_LDADD = ../lib/libtransport.la

groovim_SOURCES = ${TOOLDIR}/client/main.cpp

