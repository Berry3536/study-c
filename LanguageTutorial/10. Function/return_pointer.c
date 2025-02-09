#include <stdio.h>
#include <stdlib.h>

int *ten();
char *helloLitral();
char *helloDynamicMemory();

int main()
{
    int *ptr_num;
    char *ptr_s1;
    char *ptr_s2;

    ptr_num = ten();
    ptr_s1 = helloLitral();
    ptr_s2 = helloDynamicMemory();

    printf("%p\n", ptr_num);
    printf("%s\n", ptr_s1);
    printf("%s\n", ptr_s2);

    free(ptr_num);
    free(ptr_s2);
}

int *ten()
{
    int *ptr_num = malloc(sizeof(int));

    *ptr_num = 10;

    return ptr_num; // pointer variable assigned by malloc do not disapper when the function ends
}

char *helloLitral()
{
    char *s1 = "Hello, world!";

    return s1;
}

char *helloDynamicMemory()
{
    char *s2 = malloc(sizeof(char));

    strcpy(s2, "Hello, world!");

    return s2;
}