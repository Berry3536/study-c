#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr_arr = malloc(sizeof(int) * 10);

    for(int i = 0; i < 10; i++)
    {
        ptr_arr[i] = i * 10;
        printf("%d\n", ptr_arr[i]);
    }

    free(ptr_arr);
}