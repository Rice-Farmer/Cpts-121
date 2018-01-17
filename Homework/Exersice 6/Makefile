CC = g++

CFLAGS = -c -Wall
all:	prog1
	
prog1: main.o convert.o
	$(CC) -o prog1 main.o convert.o

main.o: main.cpp convert.h
	$(CC) $(CFLAGS) main.cpp

convert.o: convert.cpp
	$(CC) $(CFLAGS) convert.cpp

clean:
	rm -rf  *o prog1.exe