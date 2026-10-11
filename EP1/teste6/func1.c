/* 1231109 Tiago Borges
*/

/*4 celulas de uma bateria
um byte para cada celula
um byte é um par*/

int weakest_cell(unsigned int *x){
    unsigned char *limit = (unsigned char *)x + 4;
    unsigned char *p = (unsigned char *)x;
    unsigned char weakest = *p;

    while(p < limit){
        if(*p < weakest){
            weakest = *p;
        }
        p++;
    }
    return weakest;
}