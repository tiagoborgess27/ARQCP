matrix: main.o matrix.o
	gcc main.o matrix.o -o matrix

main.o: main.c matrix.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

matrix.o: matrix.c matrix.h
	gcc -g -Wall -Wextra -fanalyzer -c matrix.c -o matrix.o

clean:
	rm -f *.o matrix

run: matrix
	./matrix
