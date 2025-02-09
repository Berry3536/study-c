#include <stdio.h>
#include <string.h>

int main()
{
    char *s1 = "abcd";
    char buffer[20] = {0, };

    FILE *pFile = fopen("hello.txt", "r+"); // r+ : read/write mode

    fseek(pFile, 3, SEEK_SET);
    fwrite(s1, strlen(s1), 1, pFile);

    rewind(pFile);  // set pFile to start point of the file
    fread(buffer, 20, 1, pFile);
    printf("%s\n", buffer);

    fclose(pFile);
}