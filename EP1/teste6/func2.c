/* 1231109 Tiago Borges
*/

#include "func1.h"

int check_packs(unsigned int *packs, int n, unsigned int **critical, unsigned int **worst)
{
    int cont = 0;   
    unsigned char weakestofall = 0xFF;

    for(unsigned int *i = packs; i < packs + n; i++){
        unsigned int weakestcell = weakest_cell(i);
        if(weakestcell < weakestofall){
            *worst = i;
            weakestofall = weakestcell;
        }
        if(weakestcell < 0x40){
            critical[cont] = i;
            cont++;
        }
    }
    return cont;
}