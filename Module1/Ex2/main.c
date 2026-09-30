#include <stdio.h>

int main(){
    int x = 5;
    float y = 6;
    char z = 'a';
    int *ptr_x = &x;
    float *ptr_y = &y;
    char *ptr_z = &z;

    printf("Value x = %d\n", x);
    printf("Value y = %f\n", y);
    printf("Value z = %c\n", z);
    printf("Value of ptr_x = %p\n", ptr_x);
    printf("Value of ptr_y = %p\n", ptr_y);
    printf("Value of ptr_z = %p\n", ptr_z);
    printf("Address of x = %p\n", &x);
    printf("Address of y = %p\n", &y);
    printf("Address of z = %p\n", &z);
    printf("Address of ptr_x = %p\n", &ptr_x);
    printf("Address of ptr_y = %p\n", &ptr_y);
    printf("Address of ptr_z = %p\n", &ptr_z);
}