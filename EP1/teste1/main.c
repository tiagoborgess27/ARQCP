#include <stdio.h>
#include "func2.h"

#define NCARS 5
int main(void){
  unsigned int cars[NCARS]={0xFFFFFFFF,0xFFFAFFFA,0x00000000,0xFCFDEFAB,0xFFFFFFFF};
  unsigned int *fill[NCARS];

  int n = check_tires(cars, NCARS, fill);
  printf("Cars that need to fill the tires: %d\n", n);
  
  return 0;
}