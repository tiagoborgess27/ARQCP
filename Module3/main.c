#include <stdio.h>
#include "asm.h"

/* Dados de teste declarados como globais no módulo main.c */
char str1[] = "5a55b5";                    /* 4 cincos */
char str2[] = "hello";                     /* 0 cincos */
char str3[] = "";                          /* string vazia */
char str4[] = "5555";                      /* todos cincos */
char str5[] = "15 + 25 = 40, 5x5 = 25";    /* 5 cincos */

char src2[] = "Uuu MUNDUS";
char dst2[20];                             /* destino do Ex 2 */
char dst3[20];                             /* destino do Ex 3 */

int main(void) {
    /* Ex 1 */
    printf("five_count(\"%s\") = %d\n", str1, five_count(str1));   /* 4 */
    printf("five_count(\"%s\") = %d\n", str2, five_count(str2));   /* 0 */
    printf("five_count(\"%s\") = %d\n", str3, five_count(str3));   /* 0 */
    printf("five_count(\"%s\") = %d\n", str4, five_count(str4));   /* 4 */
    printf("five_count(\"%s\") = %d\n", str5, five_count(str5));   /* 5 */

    /* Ex 2: só troca 'u' minúsculo */
    str_copy_roman(src2, dst2);
    printf("%s -> %s\n", src2, dst2);    /* Uuu MUNDUS -> Uvv MUNDUS */

    /* Ex 3: troca 'u' e 'U' */
    str_copy_roman2(src2, dst3);
    printf("%s -> %s\n", src2, dst3);    /* Uuu MUNDUS -> Vvv MVNDVS */

    return 0;
}