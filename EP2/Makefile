# 1231109 : Tiago Borges : <turma> : version A

CC=riscv32-linux-gcc
CFLAGS=-Wall -Wextra -fanalyzer -g
ARCHFLAGS=-march=rv32imd -mabi=ilp32d
LIBRV32=${HOME}/bin/bootlin/riscv32-buildroot-linux-gnu/sysroot

program.elf: main.o func1.o func2.o
	$(CC) $(CFLAGS) $(ARCHFLAGS) main.o func1.o func2.o -o program.elf

main.o: main.c func2.h
	$(CC) $(CFLAGS) $(ARCHFLAGS) -c main.c

func1.o: func1.s func1.h
	$(CC) $(CFLAGS) $(ARCHFLAGS) -c func1.s

func2.o: func2.s func2.h
	$(CC) $(CFLAGS) $(ARCHFLAGS) -c func2.s

clean:
	rm -f *.o *.elf

run: program.elf
	qemu-riscv32 -L $(LIBRV32) ./program.elf