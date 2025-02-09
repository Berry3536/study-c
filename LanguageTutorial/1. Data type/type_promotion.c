#include <stdio.h>

int main()
{
    int num1 = 11;
    float num2 = 4.4f;

    /* implicit type conversion */
    printf("%f\n", num1 + num2);    // integer + float -> integer type converted into float type
    printf("%f\n", num1 - num2);    // integer - float -> integer type converted into float type
    printf("%f\n", num1 * num2);    // integer * float -> integer type converted into float type
    printf("%f\n", num1 / num2);    // integer / float -> integer type converted into float type
}