OBJ=singleton.o test.o
CC=g++
FLAGS=-g

test: $(OBJ)
	$(CC) $(FLAGS) -o test $(OBJ)
test.o:
	$(CC) $(FLAGS) -o test.o -c test.cc
singleton.o:
	$(CC) $(FLAGS) -o singleton.o -c singleton.cc
clean:
	rm -rf $(OBJ) test
