OBJ=weapon.o handgun.o machine_gun.o rifle.o weapon_context.o \
    main.o
CC=g++
FLAGS=-g
all: test
.PHONY: all

test: $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o test
weapon.o:
	$(CC) $(FLAGS) -c weapon.cc -o weapon.o
handgun.o:
	$(CC) $(FLAGS) -c handgun.cc -o handgun.o
machine_gun.o: 
	$(CC) $(FLAGS) -c machine_gun.cc -o machine_gun.o
rifle.o:
	$(CC) $(FLAGS) -c rifle.cc -o rifle.o
weapon_context.o:
	$(CC) $(FLAGS) -c weapon_context.cc -o weapon_context.o
main.o:
	$(CC) $(FLAGS) -c main.cc -o main.o
clean:
	rm -rf $(OBJ) test
