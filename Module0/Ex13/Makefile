count_char: main.o count_char.o
	gcc main.o count_char.o -o count_char

main.o: main.c count_char.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

count_char.o: count_char.c count_char.h
	gcc -g -Wall -Wextra -fanalyzer -c count_char.c -o count_char.o

clean:
	rm -f *.o count_char

run: count_char
	./count_char
