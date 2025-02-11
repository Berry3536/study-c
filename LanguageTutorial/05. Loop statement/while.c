#include <stdio.h>

int main()
{
    int i = 0;

    while(i < 10)
    {
        printf("Hellworld #%d\n", i);
        i++;
    }

    printf("\n");

    i = 0;
    while(i < 10)
    {
        if(i == 7)
        {
            printf("Stop!, i is %d", i);
            break;
        }
        printf("Hellworld #%d\n", i);
        i++;
    }
}