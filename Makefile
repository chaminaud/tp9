CC=gcc
OBJ=main.o
EXE=tp9


all: $(OBJ)
	gcc $(OBJ) -o $(EXE)

clean:
	rm -rf $(EXE)
	rm -rf *.o