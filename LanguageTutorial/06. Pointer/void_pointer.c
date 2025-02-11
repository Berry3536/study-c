#include <stdio.h>

int main()
{
    int num1 = 10;
    char c1 = 'a';

    int *ptr_num1 = &num1;
    char *ptr_c1 = &c1;

    void *ptr_void;  // void pointer

    /* no error */
    ptr_void = ptr_num1;    // assign int pointer on void pointer
    ptr_void = ptr_c1;      // assign char pointer on void pointer

    /* no error */
    ptr_num1 = ptr_void;    // assign void pointer on int pointer
    ptr_c1 = ptr_void;      // assign void pointer on char pointer

    // printf("%d", *ptr_void);    // void pointer cannot take dereference
}