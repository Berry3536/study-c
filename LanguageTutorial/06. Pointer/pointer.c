#include <stdio.h>

int main()
{
    int *ptr_num1;
    int num1 = 10;

    ptr_num1 = &num1;

    /* pointer value, address value */
    printf("%p\n", ptr_num1);
    printf("%p\n", &num1);
    printf("\n");

    /* dereference value */
    printf("%d\n", *ptr_num1);
    printf("\n");

    /* dereference assign */
    *ptr_num1 = 20;
    printf("%d\n", *ptr_num1);
    printf("%d\n", num1);
}