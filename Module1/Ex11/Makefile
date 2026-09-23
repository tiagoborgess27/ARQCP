stringtoint: string_ops.o main.o
	gcc -Wall string_ops.o main.o -o stringtoint

main.o: main.c string_ops.h
	gcc -Wall -c main.c -o main.o
string_ops.o: string_ops.c string_ops.h
	gcc -Wall -c string_ops.c -o string_ops.o

clean:
	rm -f *.o stringtoint

run: stringtoint
	./stringtoint