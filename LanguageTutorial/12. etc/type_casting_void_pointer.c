#include <stdio.h>

int main()
{
    int num1 = 10;
    float num2 = 3.5f;
    char c1 = 'a';
    void *ptr_void;

    ptr_void = &num1;
    // printf("%d\n", *ptr_void);       // compile error
    printf("%d\n", *(int *)ptr_void);   // pointer casting from void to int -> dereference enabled

    ptr_void = &num2;
    // printf("%d\n", *ptr_void);       // compile error
    printf("%f\n", *(float *)ptr_void);   // pointer casting from void to float -> dereference enabled

    ptr_void = &c1;
    // printf("%c\n", *ptr_void);       // compile error
    printf("%c\n", *(char *)ptr_void);   // pointer casting from void to char -> dereference enabled
}