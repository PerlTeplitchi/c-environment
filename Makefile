main.out : main.c
	gcc main.c -o main.out
	mv main.out enumerate_numbers

clean:
	rm -rf enumerate_numbers