CC=gcc
CFLAGS=-Wall -g -std=c99 

all: linked_list

linked_list: linked_list.o test_linked_list.o
	$(CC) -o linked_list linked_list.o test_linked_list.o

linked_list.o: linked_list.c linked_list.h
	$(CC) $(CFLAGS) -c linked_list.c

test_linked_list.o: test_linked_list.c linked_list.h
	$(CC) $(CFLAGS) -c test_linked_list.c

lab3: 
	gcc -o bit_ops bit_ops.c test_bit_ops.c

phase4: vector
	gcc -o vector vector.c test_vector.c

clean:
	rm linked_list linked_list.o test_linked_list.o