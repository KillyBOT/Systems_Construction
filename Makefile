all: main.o construction.o
	gcc -o Construction main.o construction.o

main.o: main.c construction.h
	gcc -c main.c

construction.o: construction.c construction.h
	gcc -c construction.c

clean:
	rm *.o

run:
	./Construction
