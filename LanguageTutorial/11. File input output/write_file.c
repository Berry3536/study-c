#include <stdio.h>

int main()
{
    /**
     * File write
     * fopen -> fprintf -> fclose
     */
    FILE *pFile = fopen("hello.txt", "w");

    fprintf(pFile, "%s %d", "Hello, world", 100);    // Write txt file

    fclose(pFile);
}