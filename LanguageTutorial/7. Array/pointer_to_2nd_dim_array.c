#include <stdio.h>

int main()
{
    int arr1[3][4] = {
        {11, 22, 33, 44},
        {55, 66, 77, 88},
        {99, 110, 121, 132}
    };

    int (*ptr_arr1)[4] = arr1;

    printf("%p\n", *ptr_arr1);
    printf("%p\n", *arr1);

    printf("%p\n", ptr_arr1);
    printf("%p\n", arr1);

    printf("%d\n", ptr_arr1[2][1]);
    printf("%d\n", arr1[2][1]);

    printf("%d\n", sizeof(ptr_arr1));
    printf("%d\n", sizeof(arr1));
}