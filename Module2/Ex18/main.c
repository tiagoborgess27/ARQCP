#include <stdio.h>
#include "asm.h"

int main(void) {
    int op1, op2, op3;

    printf("Valor op1:");
    scanf("%d", &op1);
    printf("Valor op2:");
    scanf("%d", &op2);
    printf("Valor op3:");
    scanf("%d", &op3);

    printf("sum2 = %d\n", sum2(op1, op2));
    printf("sum3 = %d\n", sum3(op1, op2));
    printf("three_halves(%d) = %d\n", op1, three_halves(op1));
    printf("parallel(%d, %d) = %d\n", op1, op2, parallel(op1, op2));

    int h, m, s;
    printf("Hours, minutes, seconds: ");
    scanf("%d %d %d", &h, &m, &s);
    printf("time_sec = %d\n", time_sec(h, m, s));

    printf("my_remainder(%d, %d, %d) = %d\n", op1, op2, op3, my_remainder(op1, op2, op3));
    printf("is_multiple(%d, %d) = %d\n", op1, op2, is_multiple(op1, op2));
    printf("six_packs(%d) = %d\n", op1, six_packs(op1));

    long long a = 4000000000LL, b = 1000000000LL;
    printf("big_sum = %lld\n", big_sum(a, b));   /* 5000000000 */

    printf("is_greater(%d, %d) = %d\n", op1, op2, is_greater(op1, op2));
    printf("in_order(%d, %d, %d) = %d\n", op1, op2, op3, in_order(op1, op2, op3));
    printf("get_area(%d, %d, %d) = %d\n", op1, op2, op3, get_area(op1, op2, op3));
    printf("get_area2(%d, %d, %d) = %d\n", op1, op2, op3, get_area2(op1, op2, op3));
    printf("compute(%d, %d, %d, %d) = %d\n", op1, op2, op3, op1 + 1, compute(op1, op2, op3, op1 + 1));
    printf("steps(%d) = %d\n", op1, steps(op1));
    printf("sigma(%d) = %d\n", op1, sigma(op1));
    printf("needed_time(%d, %d) = %d\n", op1, op2, needed_time(op1, op2));
    return 0;
}