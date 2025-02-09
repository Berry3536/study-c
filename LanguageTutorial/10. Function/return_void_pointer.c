#include <stdio.h>
#include <memory.h>
#include <string.h>

void *allocMemory();

int main()
{
    char *ptr_s1 = allocMemory();   // void pointer into char pointer
    strcpy(ptr_s1, "Hello, World!");
    printf("%s\n", ptr_s1);
    free(ptr_s1);

    int *ptr_num1 = allocMemory();  // void pointer into int pointer
    ptr_num1[0] = 10;
    ptr_num1[1] = 20;
    printf("%d %d\n", ptr_num1[0], ptr_num1[0]);
    free(ptr_num1);
}

void *allocMemory()
{
    void *ptr = malloc(100);

    return ptr; // return void type pointer
}