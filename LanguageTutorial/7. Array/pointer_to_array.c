#include <stdio.h>

int main()
{
    int arr1[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 110};
    int *ptr_arr1 = arr1;

    printf("%d\n", *ptr_arr1);
    printf("%d\n", *arr1);

    printf("%d\n", ptr_arr1[5]);
    printf("%d\n", arr1[5]);

    printf("0x%p\n", ptr_arr1);
    printf("0x%p\n", arr1);

    printf("%d\n", sizeof(arr1));
    printf("%d\n", sizeof(ptr_arr1));
}