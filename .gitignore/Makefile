# This will compile the all files

all: result

result: main.o add.o
	gcc main.o add.o -o result
main.o: main.c header.h
	gcc -c main.c
add.o: add.c header.h
	gcc -c add.c

clean:
	rm -rf *o result
