#include <stdio.h>

int main()
{
    char s1[] = "Helloworld";
    
    s1[0] = 'A';
    s1[1] = 'B';
    s1[2] = 'C';
    s1[3] = 'D';
    s1[4] = 'E';

    printf("%s\n", s1);
    printf("size of s1 : %d\n",sizeof(s1)); // 1byte(char) * 11(10 characters + 1 NULL)
}