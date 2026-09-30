count_value: main.o count_value.o
	gcc main.o count_value.o -o count_value

main.o: main.c count_value.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

count_value.o: count_value.c count_value.h
	gcc -g -Wall -Wextra -fanalyzer -c count_value.c -o count_value.o

clean:
	rm -f *.o count_value

run: count_value
	./count_value
