/* 1231109 Tiago Borges  
*/

int run_length(int *p, int *end)
{
    int *q = p;

    while (q < end && *q == *p) {
        q++;
    }
    return (int)(q - p);
}

/*
int run_length(int *p, int *end)
{
    unsigned int *x = (unsigned int *)p;
    int count = 0;

    while (x < (unsigned int *)end) {
        if (*x == *(x)+1) {
            count++;
        }
        *x++;
    }

    return count;
}
*/