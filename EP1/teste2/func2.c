#include "func1.h"

int check_boards(unsigned int *boards, int n, unsigned int **alert){

    int cont = 0;
    for(unsigned int *i = boards; i < boards + n; i++){
        if(count_hot(i) >= 2){
            alert[cont] = i;
            cont++;
        }
    }
    return cont;
}