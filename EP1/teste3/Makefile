ex: main.o func1.o func2.o
	gcc -o ex main.o func1.o func2.o

main.o: main.c func1.h func2.h
	gcc -c main.c -o main.o

func1.o: func1.c func1.h
	gcc -c func1.c -o func1.o

func2.o: func2.c func2.h
	gcc -c func2.c -o func2.o

clean:
	rm -f *.o ex

run: ex
	./ex
