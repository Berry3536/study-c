#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 20;
    int *ptr_num1;
    int *ptr_num2;

    ptr_num1 = &num1;
    ptr_num2 = malloc(sizeof(int)); // Dynamic memory allocation

    *ptr_num2 = 40;

    printf("%p\n", ptr_num1);
    printf("%p\n", ptr_num2);
    printf("%d\n", *ptr_num2);

    free(ptr_num2);                 // Dynamic memory deallocation
}