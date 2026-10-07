#include "func2.h"
#include "func1.h"

int check_tires(unsigned int *cars, int n, unsigned int **fill)
{
    int count = 0;

    for (unsigned int *p = cars; p < cars + n; p++)
    {
        if (low_pressure(p))
        {
            fill[count] = p;
            count++;
        }
    }
    return count;
}