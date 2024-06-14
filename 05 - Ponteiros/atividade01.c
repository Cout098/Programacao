/* 1 - Crie e inicialize 1 ponteiro para cada tipo primitivo abaixo:
a) int
b) float
c) char
d) double */

#include <stdio.h>

int main(){
    int *ptr1, var1 = 10;
    float *ptr2, var2 = 1.1;
    char *ptr3, var3 = 'A';
    double *ptr4, var4 = 1.32101;

    ptr1 = &var1;
    ptr2 = &var2;
    ptr3 = &var3;
    ptr4 = &var4;

    printf("O valor de var1: %d",*ptr1);
    printf("\nO valor de var2: %.1f",*ptr2);
    printf("\nO valor de var3: %c",*ptr3);
    printf("\nO valor de var4: %f",*ptr4);

    return 0;
}

