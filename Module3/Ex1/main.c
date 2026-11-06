#include <stdio.h>
#include "asm.h"

/* Dados de teste declarados como globais no módulo main.c */
char str1[] = "5a55b5";     /* 4 cincos */
char str2[] = "hello";      /* 0 cincos */
char str3[] = "";           /* string vazia */
char str4[] = "5555";       /* todos cincos */
char str5[] = "15 + 25 = 40, 5x5 = 25";   /* cincos misturados com outros dígitos */

int main(void) {
    printf("five_count(\"%s\") = %d\n", str1, five_count(str1));   /* 4 */
    printf("five_count(\"%s\") = %d\n", str2, five_count(str2));   /* 0 */
    printf("five_count(\"%s\") = %d\n", str3, five_count(str3));   /* 0 */
    printf("five_count(\"%s\") = %d\n", str4, five_count(str4));   /* 4 */
    printf("five_count(\"%s\") = %d\n", str5, five_count(str5));   /* 5 */

    return 0;
}