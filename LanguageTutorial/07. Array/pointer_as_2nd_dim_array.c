#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **m = malloc(sizeof(int *) * 3);    // rows

    for(int i = 0; i < 3; i++)
    {
        m[i] = malloc(sizeof(int) * 4);     // columns
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            m[i][j] = i * j;
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < 3; i++)
    {
        free(m[i]);
    }
    free(m);
}