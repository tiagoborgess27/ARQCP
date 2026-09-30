size_string: main.o size_string.o
	gcc main.o size_string.o -o size_string

main.o: main.c size_string.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

size_string.o: size_string.c size_string.h
	gcc -g -Wall -Wextra -fanalyzer -c size_string.c -o size_string.o

clean:
	rm -f *.o size_string

run: size_string
	./size_string