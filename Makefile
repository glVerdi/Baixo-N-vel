all: principal

Principal: principal.o listas.o
	gcc -o principal principal.o listas.o

Principal.o: principal.c
	gcc -c principal.c

listas.o: listas.c
	gcc -c listas.c

clean:
	rm principal.o listas.o principal
