#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *buffer;
    int size;
    int count;

    FILE *pFile = fopen("hello.txt", "r");

    fseek(pFile, 0, SEEK_END);
    size = ftell(pFile);

    buffer = malloc(size + 1);  // +1 is for NULL
    memset(buffer, 0, size + 1);

    fseek(pFile, 0, SEEK_SET);
    count = fread(buffer, size, 1, pFile);

    printf("%s size : %d, count : %d\n", buffer, size, count);

    fclose(pFile);
    free(buffer);
}