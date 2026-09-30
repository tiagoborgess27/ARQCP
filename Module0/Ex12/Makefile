real_number: main.o real_number.o
	gcc main.o real_number.o -o real_number

main.o: main.c real_number.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

real_number.o: real_number.c real_number.h
	gcc -g -Wall -Wextra -fanalyzer -c real_number.c -o real_number.o

clean:
	rm -f *.o real_number

run: real_number
	./real_number
