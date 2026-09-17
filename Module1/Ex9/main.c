#include <stdio.h>
#include "average.h"

int main()
{
    int v[] = {1, 2, 3, 4, 5};
    int n = sizeof(v) / sizeof(v[0]);
    int r = 0;

    r = average(v[0], v[1]);
    printf("average = %d\n", r);

    r = average_array(v, n);
    printf("average_array = %d\n", r);

    return 0;
}