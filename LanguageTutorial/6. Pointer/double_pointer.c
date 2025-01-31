#include <stdio.h>

int main()
{
    int *ptr_num1;
    int **pptr_num1;
    int num1 = 10;

    ptr_num1 = &num1;
    pptr_num1 = &ptr_num1;  // address of pointer variable should be assigned on double pointer variable

    printf("%d\n", **pptr_num1);
    printf("%p\n", ptr_num1);
    printf("%p\n", pptr_num1);
}