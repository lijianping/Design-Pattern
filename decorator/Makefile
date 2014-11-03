OBJ=beef.o chicken.o decorator.o hamburger.o main.o
FLAGS=-g
CC=g++

decorator_test: $(OBJ)
	$(CC) $(FLAGS) -o decorator_test $(OBJ)
beef.o:
	$(CC) $(FLAGS) -o beef.o -c beef.cc
chicken.o:
	$(CC) $(FLAGS) -o chicken.o -c chicken.cc
decorator.o:
	$(CC) $(FLAGS) -o decorator.o -c decorator.cc
hamburger.o:
	$(CC) $(FLAGS) -o hamburger.o -c hamburger.cc
main.o:
	$(CC) $(FLAGS) -o main.o -c main.cc
clean:
	rm -rf decorator_test $(OBJ)
