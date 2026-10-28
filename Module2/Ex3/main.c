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

    return 0;
}