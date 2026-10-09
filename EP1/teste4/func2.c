#include "func1.h"

int *classify(int *grades, int n, int *low, int *mid, int *high){
    int *p = grades;
    int *end = grades + n;
    int highest = 0;
    int *highest_address = 0;    
    *low = count_between(p, end, 0, 9);
    *mid = count_between(p, end, 10, 14);
    *high = count_between(p, end, 15, 20);

     while (p < end) {
        if (*p > highest) {
            highest = *p;
            highest_address = p;
        }
        p++;
    }
    return highest_address;
}