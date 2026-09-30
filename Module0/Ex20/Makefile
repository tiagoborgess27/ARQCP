triangular_matrix: main.o triangular_matrix.o
	gcc main.o triangular_matrix.o -o triangular_matrix

main.o: main.c triangular_matrix.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

triangular_matrix.o: triangular_matrix.c triangular_matrix.h
	gcc -g -Wall -Wextra -fanalyzer -c triangular_matrix.c -o triangular_matrix.o

clean:
	rm -f *.o triangular_matrix

run: triangular_matrix
	./triangular_matrix
