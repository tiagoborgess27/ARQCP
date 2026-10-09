/* 1231109 Tiago Borges  
*/

#include <stdio.h>
#include "func1.h"
#include "func2.h"

#define N 14
int main(void){
  int v[N] = {3, 3, 5, 5, 5, 1, 1, 7, 7, 7, 7, 2, 2, 2};
  int *start;
  
  int run = longest_run(v, N, &start);
  printf("Longest run: %d\n", run);
  printf("Longest run starts at index: %ld\n", start - v);

    int *p = start;
    while (p < start + run) {
        *p = 0;
        p++;
    }
    
    for(p = v; p < v + N; p++){
        printf("%d ", *p);
    }

  return 0;
}