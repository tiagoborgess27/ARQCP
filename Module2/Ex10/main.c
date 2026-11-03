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
    printf("my_remainder = %d\n", my_remainder(5, 4, 4));   // 1
    printf("is_multiple(%d, %d) = %d\n", op1, op2, is_multiple(op1, op2));
    printf("six_packs(%d) = %d\n", op1, six_packs(op1));
    long long a = 4000000000LL, b = 1000000000LL;
    printf("big_sum = %lld\n", big_sum(a, b));   // 5000000000  
    return 0;
}