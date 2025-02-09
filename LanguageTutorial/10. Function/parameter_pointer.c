#include <stdio.h>

#define IN
#define OUT

void SwapNumber(int first, int second);
void SwapNumber_PointerParam(int *first, int *second);

int main()
{
    int num1 = 10;
    int num2 = 20;

    SwapNumber(num1, num2);
    printf("num1 : %d\n", num1);
    printf("num2 : %d\n", num2);
    printf("\n");

    SwapNumber_PointerParam(&num1, &num2);
    printf("num1 : %d\n", num1);
    printf("num2 : %d\n", num2);
}


/**
 * Non pointer type parameter -> Value ouside the function doesn't change
 */
void SwapNumber(int first, int second)
{
    int temp;

    temp = first;
    first = second;
    second = temp;
}

/**
 * Pointer type parameter -> Value ouside the function change
 * Tip: When creating a function that returns multiple values, use pointer type parameter
 */
void SwapNumber_PointerParam(OUT int *first, OUT int *second)
{
    int temp;

    temp = *first;
    *first = *second;
    *second = temp;
}