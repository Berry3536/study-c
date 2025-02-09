#include <stdio.h>
#include <string.h>

int main()
{
    char buffer[5] = {0, };
    int count = 0;
    int total = 0;

    FILE *pFile = fopen("hello.txt", "r");

    while(feof(pFile) == 0) // until the end pointer of the file
    {
        count = fread(buffer, sizeof(char), 4, pFile);
        printf("%s", buffer);
        memset(buffer, 0, sizeof(buffer));
        total += count;
    }

    printf("\ntotal : %d\n", total);

    fclose(pFile);
}