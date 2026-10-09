int count_between(int *p, int *end, int min, int max){
    int cont = 0;
    int *helper = p;

    while(helper < end){
        if(*helper >= min && *helper <= max){
            cont++;
        }
        helper++;
    }
    return cont;
}   