.PHONY: clean
.SUFFIXES: .c .o .a .so

vpath %.c src
vpath %.h include

%.o: %.c
	gcc -c $<
libp%.a: p%.o
	ar rs $@ $^
libo%.so: o%.o
	gcc -shared -o $@ $^
%: %.o
	gcc -o $@ $^
Code2: Code2.o libpole.a libobjetosc.so
Code2.o: Code2.c pole.h objetosc.h
pole.o: pole.c
objetosc.o: objetosc.c
libpole.a: pole.o
libobjetosc.so: objetosc.o
clean:
	rm -f Code2 *.o *.a *.so
