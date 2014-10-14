OBJ=reflect.o main.o
CC=g++
FLAGS=-g

all: test
.PHONY: all

test: $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o test
main.o:
	$(CC) $(FLAGS) -c main.cc -o main.o
reflect.o:
	$(CC) $(FLAGS) -c reflect.cc -o reflect.o
clean:
	rm -rf $(OBJ) test

