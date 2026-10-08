#define NBOARDS 6
#include <stdio.h>
#include "func1.h"
#include "func2.h"
int main(void){
  unsigned int boards[NBOARDS] = {0x10203040, 0xC9CAC9CA, 0xFFFFFFFF,0x00C800C9, 0xC9C80000, 0xFFC9C8C8};
  unsigned int *alert[NBOARDS];
  
  int num_alerts = check_boards(boards, NBOARDS, alert);
  printf("Boards with more than 2 hot bytes: %d\n", num_alerts);

  return 0;
}