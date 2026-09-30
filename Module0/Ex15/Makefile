count_words: main.o count_words.o
	gcc main.o count_words.o -o count_words

main.o: main.c count_words.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

count_words.o: count_words.c count_words.h
	gcc -g -Wall -Wextra -fanalyzer -c count_words.c -o count_words.o

clean:
	rm -f *.o count_words

run: count_words
	./count_words
