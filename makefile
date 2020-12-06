CC=gcc
all: myBank.o main.o
	$(CC) -Wall -o all main.o myBank.o

main.o: main.c myBank.h
	$(CC) -Wall -c main.c

myBank.o: myBank.c myBank.h
	$(CC) -Wall -c myBank.c	

.PHONY: clean all 

clean:
	rm -f *.o all
