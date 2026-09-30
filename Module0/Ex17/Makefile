check_string: main.o check_string.o
	gcc main.o check_string.o -o check_string

main.o: main.c check_string.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

check_string.o: check_string.c check_string.h
	gcc -g -Wall -Wextra -fanalyzer -c check_string.c -o check_string.o

clean:
	rm -f *.o check_string

run: check_string
	./check_string
