#include <stdio.h>

int main()
{
    /**
     * File read
     * fopen -> fscanf -> fclose
     */

    char s1[20];
    int num1;

    FILE *pFile = fopen("hello.txt", "r");

    fscanf(pFile, "%s %d", s1, &num1);  // Read txt file
    printf("%s %d\n", s1, num1);

    fclose(pFile);
}