OBJ=main.o abstract.o concrete.o
CC=g++
FLAGS=-g
all:test
.PHONY:all

test: $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o test
main.o:
	$(CC) $(FLAGS) -c main.cc -o main.o
abstract.o:
	$(CC) $(FLAGS) -c abstract.cc -o abstract.o
concrete.o:
	$(CC) $(FLAGS) -c concrete.cc -o concrete.o
clean:
	rm -rf $(OBJ) test
