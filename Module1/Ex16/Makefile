fake_hash: main.o fake_hash.o
	gcc main.o fake_hash.o -o fake_hash

main.o: main.c fake_hash.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

fake_hash.o: fake_hash.c fake_hash.h
	gcc -g -Wall -Wextra -fanalyzer -c fake_hash.c -o fake_hash.o

clean:
	rm -f *.o fake_hash

run: fake_hash
	./fake_hash
