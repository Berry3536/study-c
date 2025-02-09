#include <stdio.h>

int main()
{
    int file_size;

    FILE *pFile = fopen("hello.txt", "r");

    fseek(pFile, 0, SEEK_END);
    file_size = ftell(pFile);
    printf("%d\n", file_size);

    fclose(pFile);
}