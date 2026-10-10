#include <stdio.h>
#include "func1.h"

int split_words(char *str, char **words){
    int count = 0;

    char *p = str;

    while(*p != '\0'){
        p = skip_spaces(p);
        printf("valor de p: %c \n", *p);
        if (*p != '\0'){
            words[count] = p;
            count++;
            while(*p != ' ' && *p != '\0'){
                p++;
            }
            *p = '\0';
            p++;
        }

    }
    return count;
}