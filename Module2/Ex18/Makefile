CC=riscv32-linux-gcc
CFLAGS=-Wall -Wextra -fanalyzer -g
ARCHFLAGS=-march=rv32imd -mabi=ilp32d
LIBRV32=${HOME}/bin/bootlin/riscv32-buildroot-linux-gnu/sysroot

program.elf: main.o asm.o
	$(CC) $(CFLAGS) $(ARCHFLAGS) main.o asm.o -o program.elf

main.o: main.c
	$(CC) $(CFLAGS) $(ARCHFLAGS) -c main.c

asm.o: asm.s asm.h
	$(CC) $(CFLAGS) $(ARCHFLAGS) -c asm.s

clean:
	rm -f *.o *.elf

run: program.elf
	qemu-riscv32 -L $(LIBRV32) ./program.elf