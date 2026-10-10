#include <stdio.h>
#include "func1.h"
#include "func2.h"

#define MAXW 10
int main(void){
  char text[] = "   the quick  brown fox   jumps  ";
  char *words[MAXW];

  int words_count = split_words(text, words);
  printf("Number of words: %d\n", words_count);

  printf("Words:\n");

  for(int i = 0; i < words_count; i++){
    char *p = words[i];
    while(*p != '\0'){
      printf("%c", *p);
      p++;
    }
    printf("\n");
  }

  return 0;
}