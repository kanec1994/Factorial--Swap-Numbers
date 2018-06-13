fact: fact.o
	gcc -o fact fact.o
swap: swap_numbers.o
	gcc -o swap swap_numbers.o
fact.o: fact.c
	gcc -c fact.c
swap_numbers.o: swap_numbers.c
	gcc -c swap_numbers.c
clean:
	rm *.o swap fact
