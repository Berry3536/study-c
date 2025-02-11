#include <stdio.h>

int main()
{
    char my_char;

    my_char = 0x40;

    printf("%c\n", my_char);
    printf("0x%x\n", my_char);    // print as hexadecimal
    printf("%d\n", my_char);    // print as decimal
}