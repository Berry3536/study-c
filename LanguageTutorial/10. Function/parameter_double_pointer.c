#include <stdio.h>
#include <stdlib.h>

#define IN
#define OUT

void AllocMemory(void **ptr, int size);

int main()
{
    long long *pNum;

    AllocMemory((void **)&pNum, sizeof(long long));

    *pNum = 10;
    printf("%lld\n", *pNum);

    free(pNum);
}

void AllocMemory(OUT void **ptr, IN int size)
{
    *ptr = malloc(size);
}