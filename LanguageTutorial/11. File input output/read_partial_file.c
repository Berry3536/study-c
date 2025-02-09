#include <stdio.h>
#include <string.h>

int main()
{
    char buffer[10] = {0, };

    FILE *pFile = fopen("hello.txt", "r");

    fseek(pFile, 2, SEEK_SET);
    fread(buffer, 3, 1, pFile);
    printf("%s\n", buffer);

    memset(buffer, 0, 10);

    fseek(pFile, 3, SEEK_CUR);
    fread(buffer, 4, 1, pFile);
    printf("%s\n", buffer);

    fclose(pFile);
}