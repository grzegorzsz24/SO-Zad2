ACLOCAL_AMFLAGS = -I m4
bin_PROGRAMS = Code2
Code2_SOURCES = src/Code2.c
include_HEADERS = include/pole.h include/objetosc.h
Code2_DEPENDENCIES = libobj.la libpo.a
Code2_CFLAGS = $(AM_CFLAGS)
#biblioteka dynamiczna
lib_LTLIBRARIES = libobj.la 
libobj_la_SOURCES = src/objetosc.c
#biblioteka statyczna
noinst_LIBRARIES = libpo.a
libpo_a_SOURCES = src/pole.c
Code2_LDADD = libobj.la libpo.a
Code2_LDFLAGS = -rpath /usr/local/lib

