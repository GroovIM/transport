BUILDTOP=..
TOPLEVEL=${srcdir}/..
TOOLDIR=${TOPLEVEL}/tools

LIBDIR=${TOPLEVEL}/lib
INCDIR=${TOPLEVEL}/include/

AM_CPPFLAGS = -g -O1 -I$(TOPLEVEL)/include -I$(BUILDTOP)/include -I$(TOOLDIR) -DTOPDIR=\"${abs_top_srcdir}\"

bin_PROGRAMS = client

client_CPPFLAGS = -g -O1 -I$(TOPLEVEL)/include -I$(BUILDTOP)/include -I$(TOOLDIR) -DTOPDIR=\"${abs_top_srcdir}\"

client_LDFLAGS =  -lssl

client_SOURCES = ${TOOLDIR}/client/main.cpp \
        ${INCDIR}/Protocol/Protocol.h \
        ${INCDIR}/Protocol/SSL.h \
        ${LIBDIR}/Protocol/SSL.cpp
