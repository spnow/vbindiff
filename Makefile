#--------------------------------------------------------------------------
# $Id: Makefile,v 1.7 1996/02/15 03:27:25 Madsen Exp $
#--------------------------------------------------------------------------
# Visual Binary Diff
# Copyright 1995 by Christopher J. Madsen
#
# Makefile for use with GNU Make, EMX 0.9b, and GCC 2.7.2

CC=gcc
CXX=gcc
RM=del
SHELL=cmd.exe
VERNUM=perl.exe /util/bin/vernum.pl -d0

CFLAGS=-Wall -O3
CXXFLAGS=$(CFLAGS)
LDFLAGS=-Zomf -Zcrtdll -s

OBJECTS=vbindiff.obj getopt.obj getopt1.obj

ifdef DEBUG
# Use a.out format so we can use GDB:
OBJECTS:=$(subst .obj,.o,$(OBJECTS))
CFLAGS:=$(CFLAGS) -O0 -g
LDFLAGS=-g
endif

%.obj: %.c
	$(CC) -c -Zomf $(CPPFLAGS) $(CFLAGS) $< -o $@

%.obj: %.cc
	$(CXX) -c -Zomf $(CPPFLAGS) $(CXXFLAGS) $< -o $@

all: vbindiff.exe

.PHONY: all clean dist distclean mostlyclean maintainer-clean

vbindiff.exe: $(OBJECTS)
	$(CC) $(LDFLAGS) -o vbindiff.exe vbindiff.def \
		$(OBJECTS) -lvideo -lstdcpp

$(OBJECTS): getopt.h

clean distclean mostlyclean:
	-$(RM) *.o *.obj

maintainer-clean:
	$(RM) *.o *.obj *.exe

# VBD_TMP is used only by `make dist'; you shouldn't need to change it:
VBD_TMP := $(subst /,\\,$(TMP))\\vbindiff
SOURCES := *.cc *.c *.h *.def Makefile

dist:
	-$(RM) vbindiff.zip source.zip
	@mkdir $(VBD_TMP)
	@copy *.c $(VBD_TMP)
	@copy *.h $(VBD_TMP)
	@copy *.def $(VBD_TMP)
	copy Makefile $(VBD_TMP)\\Makefile
	attrib -r $(VBD_TMP)\\*
	$(VERNUM) $(VBD_TMP) vbindiff.cc \
		ReadMe.1st File_ID.DIZ VBinDiff.txt
	$(MAKE) -C $(VBD_TMP) all distclean
	zip -9mj source $(addprefix $(VBD_TMP)\\,$(SOURCES))
	zip -9mj vbindiff $(VBD_TMP)\\*
	@zip -9j vbindiff /emx/doc/COPYING
	@zip -0m vbindiff source.zip
	@rmdir $(VBD_TMP)
