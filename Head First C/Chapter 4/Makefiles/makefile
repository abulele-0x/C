printname.o : printname.c printname.h
	gcc -c printname.c

main.o : main.c printname.h
	gcc -c main.c

nameprinter: main.o printname.o
	gcc main.o printname.o -o nameprinter
