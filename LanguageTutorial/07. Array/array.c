#include <stdio.h>

int main()
{
    int arr1[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 110};
    int arr2[15] = {0, };

    printf("size of arr1 : %d\n", sizeof(arr1));    // 4 byte(int) * 10(num of elements) = 40
    printf("size of arr2 : %d\n", sizeof(arr2));    // 4 byte(int) * 15(num of elements) = 60
    printf("max index of arr1 : %d\n", sizeof(arr1) / sizeof(int));
    printf("max index of arr2 : %d\n", sizeof(arr2) / sizeof(int));
    printf("\n");

    for(int i = 0; i < sizeof(arr1) / sizeof(int); i++)
    {
        printf("%d\n", arr1[i]);
    }
    printf("\n");
    
    for(int i = 0; i < sizeof(arr2) / sizeof(int); i++)
    {
        printf("%d\n", arr2[i]);
    }
}