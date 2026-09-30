find_pattern: main.o find_pattern.o
	gcc main.o find_pattern.o -o find_pattern

main.o: main.c find_pattern.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

find_pattern.o: find_pattern.c find_pattern.h
	gcc -g -Wall -Wextra -fanalyzer -c find_pattern.c -o find_pattern.o

clean:
	rm -f *.o find_pattern

run: find_pattern
	./find_pattern
