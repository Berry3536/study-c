#include <stdio.h>

int main()
{
    int num1 = 5;
    int num2;

    /* Conditional Operator
     * Variable ? Value1 : Value2 -> if Variable is true, choose Value1. If not, choose Value2
     */
    num2 = (num1 == 5) ? 100 : 200;

    printf("num2 : %d\n", num2);

    printf("%s\n", num1 == 5 ? "num1은 5입니다" : "num1은 5가 아닙니다");
}