#include <stdio.h>

int main()
{
    char c1 = 'a';
    char *s1 = "Hello";

    printf("%c\n", c1);
    printf("%s\n", s1);
    printf("0x%p\n", s1);
    printf("\n");

    printf("%c\n", s1[0]);
    printf("%c\n", s1[1]);
    printf("%c\n", s1[2]);
    printf("%c\n", s1[3]);
    printf("%c\n", s1[4]);
    printf("%c\n", s1[5]);
}