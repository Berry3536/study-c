#include <stdio.h>

int main()
{
    int arr1[3][4] = {
        {11, 22, 33, 44},
        {55, 66, 77, 88},
        {99, 110, 121, 132}
    };

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("size of arr1 : %d\n", sizeof(arr1));    // 4byte(int) * 3 rows * 4 columns = 48
    printf("row : %d\n", sizeof(arr1) / sizeof(arr1[0]));
    printf("column : %d\n", sizeof(arr1[0]) / sizeof(int));
}