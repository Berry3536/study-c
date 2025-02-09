#include <stdio.h>

int AddNumber(int number1, int number2);

int main()
{
    int num1;

    num1 = AddNumber(10, 20);

    printf("%d\n", num1);
}

int AddNumber(int number1, int number2)
{
    return number1 + number2;
}