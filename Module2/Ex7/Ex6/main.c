#include <stdio.h>
#include "asm.h"

int main(void) {
    int op1, op2;

    printf("Valor op1:");
    scanf("%d", &op1);
    printf("Valor op2:");
    scanf("%d", &op2);

    printf("sum2 = %d\n", sum2(op1, op2));
    printf("sum3 = %d\n", sum3(op1, op2));
    printf("three_halves(%d) = %d\n", op1, three_halves(op1));
    printf("parallel(%d, %d) = %d\n", op1, op2, parallel(op1, op2));
    int h, m, s;
    printf("Hours, minutes, seconds: ");
    scanf("%d %d %d", &h, &m, &s);
    printf("time_sec = %d\n", time_sec(h, m, s));
    printf("my_remainder = %d\n", my_remainder(op1, op2, h));
    return 0;
}