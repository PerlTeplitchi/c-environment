#utilisation de variable pour test

CC = gcc

#all: main.out

build : main.c
	$(CC) main.c -o main.out
	mv main.out enumerate_numbers

clean:
	rm -rf enumerate_numbers