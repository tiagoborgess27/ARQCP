/* 1231109: Tiago Borges: 2DE: exercise version */
#include <stdio.h>
#include "func2.h"
#define N 6
int main(void){
  int vec[N] = {12, 7, 30, 5, 21, 9};
  int sum;

    int avg = vec_stats(vec, N, &sum);

    printf("Sum: %d\n", sum);
    printf("Average: %d\n", avg);

  return 0;
}