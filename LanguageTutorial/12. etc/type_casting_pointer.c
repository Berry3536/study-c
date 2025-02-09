#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr_num = malloc(sizeof(int));
    char *ptr_char;

    *ptr_num = 0x12345678;

    ptr_char = (char *)ptr_num;

    printf("0x%x\n", *ptr_num);
    printf("0x%x\n", *ptr_char);

    free(ptr_num);
}