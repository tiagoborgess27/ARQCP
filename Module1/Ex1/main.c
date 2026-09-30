#include <stdio.h>

int main(void)
{
    int x = 5;
    int *ptr_x = &x;      // ptr_x é um ponteiro para x, ou seja, ptr_x guarda o endereço de x
    float y = *ptr_x + 3; // igual ao que está no endereço de x, + 3 ou seja, 5 + 3 = 8

    printf("X Value = %d\n", x);
    printf("Y Value = %f\n", y);
    printf("Address of X = %p\n", (void *)&x);
    printf("Address of ptr_x = %p\n", (void *)&ptr_x);
    printf("Value of ptr_x (points to) = %p\n", (void *)ptr_x);
    printf("Address of Y = %p\n", (void *)&y);

    printf("=================\n");

    int vec[] = {10, 20, 30, 40};
    int *ptr_vec = vec;
    int z = *ptr_vec;
    int h = *(ptr_vec + 3);

    printf("Z Value = %d\n", z);
    printf("H Value = %d\n", h);
    printf("Address of vec = %p\n", vec);
    printf("Address of ptr_vec = %p\n", &ptr_vec);
    printf("Value of vec = %p\n", vec);
    printf("Value of ptr_vec (points to) = %p\n", ptr_vec);
    printf("Value pointed by ptr_vec = %d\n", *ptr_vec);
    printf("===============\n");

    int i;
    for (i = 0; i < 4; i++)
    {
        printf("1: %p,%d\t", &vec[i], vec[i]);
    }
    printf("\n");
    for (ptr_vec = vec; ptr_vec < vec + 4; ptr_vec++) // ptr_vec++; avança 4 bytes (não 1!) → passa a apontar para o próximo int
    {
        printf("2: %p,%d\t", ptr_vec, *ptr_vec);
    }
    printf("\n");
    for (ptr_vec = vec + 3; ptr_vec >= vec; ptr_vec--)
    {
        printf("3: %p,%d\t", ptr_vec, *ptr_vec);
    }
    printf("\n");

    int a;
    printf("\n");
    ptr_vec = vec;
    printf("4: %p,%d\n", ptr_vec, *ptr_vec);
    a = *ptr_vec++;
    printf("5: %p,%d,%d\n", ptr_vec, *ptr_vec, a);
    ptr_vec = vec;
    a = (*ptr_vec)++;
    printf("6: %p,%d,%d\n", ptr_vec, *ptr_vec, a);
    ptr_vec = vec;
    a = *++ptr_vec;
    printf("7: %p,%d,%d\n", ptr_vec, *ptr_vec, a);
    ptr_vec = vec;
    a = ++*ptr_vec;
    printf("8: %p,%d,%d\n", ptr_vec, *ptr_vec, a);
    printf("\n");
    for (ptr_vec = vec; ptr_vec < vec + 4; ptr_vec++)
    {
        printf("9: %p,%d\t", ptr_vec, *ptr_vec);
    }

    printf("\n");
    unsigned int d = 0xAABBCCDD;
    printf("10: %p,%x\t", &d, d);
    printf("\n");
    unsigned char *ptr_d = (unsigned char *)&d;
    unsigned char *p;
    for (p = ptr_d; p < ptr_d + sizeof(unsigned int); p++)
    {
        printf("11: %p,%x\t", p, (unsigned char)*p);
    }
    printf("\n");
    return 0;
}