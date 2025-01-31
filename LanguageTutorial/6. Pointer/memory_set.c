#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int main()
{
    long long *ptr_num = malloc(sizeof(long long));

    memset(ptr_num, 0x27, sizeof(long long));

    printf("0x%llx\n", *ptr_num);

    free(ptr_num);
}