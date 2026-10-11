/* 1231109 Tiago Borges
*/

#include <stdio.h>
#include "func1.h"
#include "func2.h"

#define NPACKS 6
int main(void){
  unsigned int packs[NPACKS] = {0xFFFFFFFF, 0x80FF3F90, 0x40404040, 0xFFFFFFFE, 0x10203040, 0x10FFFFFF};
  unsigned int *critical[NPACKS];
  unsigned int *worst;
 
  int num_critical = check_packs(packs, NPACKS, critical, &worst);

  printf("Number of critical packs: %d\n", num_critical);
 
  printf("Critical packs indexes:\n");
  for(unsigned int **i = critical; i < critical + num_critical; i++){
    printf("  %d\n", *i-packs);
  }

  printf("Worst pack index:\n");
  printf("  %d\n", worst-packs);

  return 0;
}


