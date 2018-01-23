CC = g++

CFLAGS = -c -Wall
all:	prog
	
prog: sample.o displayAccounts.o
	$(CC) -o prog sample.o displayAccounts.o

sample.o: sample.cpp displayAccounts.h bankAccount.h
	$(CC) $(CFLAGS) sample.cpp

displayAccounts.o: displayAccounts.cpp bankAccount.h
	$(CC) $(CFLAGS) displayAccounts.cpp

clean:
	rm -rf  *o prog.exe