/* 1231109 Tiago Borges  
*/
#include "func1.h"

int longest_run(int *vec, int n, int **start){
    int highest_count = 0;

    for(unsigned int *p = vec; p < (unsigned int *)(vec + n); p++){
        int value = run_length(p, vec + n);
        if(value > highest_count){
            highest_count = value;
            *start = p;
        }
    }
    return highest_count;
}  