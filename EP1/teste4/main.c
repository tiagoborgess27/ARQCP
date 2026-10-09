#include <stdio.h>
#include "func1.h"
#include "func2.h"

#define N 12
int main(void){
  int grades[N] = {8, 15, 12, 4, 19, 10, 9, 20, 13, 7, 16, 18};
  int low, mid, high;
  int *best;
  
    best = classify(grades, N, &low, &mid, &high);
    printf("Lowest: %d\n", low);
    printf("Middle: %d\n", mid);
    printf("Higher: %d\n", high);    

    printf("Best grade: %d\n", *best);

  return 0;
}