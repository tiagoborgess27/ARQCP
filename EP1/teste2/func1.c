int count_hot(unsigned int *x){
    unsigned char *p = (unsigned char *)x;
    unsigned int *limit = (unsigned int *)(p + 4);
    int count = 0;

    while (p < (unsigned char *)limit) {
        if (*p > 0xC8) {
            count++;
        }
        p++;
    }

    return count;
}