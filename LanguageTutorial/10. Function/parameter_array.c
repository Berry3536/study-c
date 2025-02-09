#include <stdio.h>

#define IN
#define OUT

#define USE_POINTER

#ifdef USE_POINTER
void PrintArray(IN int *arr, IN int count);
void SetElement(OUT int *arr, IN int index);
#else
void PrintArray(IN int arr[], IN int count);
void SetElement(OUT int arr[], IN int index);
#endif

int main()
{
    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    PrintArray(arr1, sizeof(arr1) / sizeof(int));
    SetElement(arr1, 2);
    PrintArray(arr1, sizeof(arr1) / sizeof(int));
}

#ifdef USE_POINTER
void PrintArray(IN int *arr, IN int count)
{
    for(int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nparameter is defined as pointer\n\n");
}

void SetElement(OUT int *arr, IN int index)
{
    arr[index] = 9999;
}

#else
void PrintArray(IN int arr[], IN int count)
{
    for(int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nparameter is defined as array\n\n");
}

void SetElement(OUT int arr[], IN int index)
{
    arr[index] = 9999;
}
#endif