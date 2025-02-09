#include <stdio.h>

void PrintHello();
void PrintBonjour();
int add(int a, int b);
int mul(int a, int b);

int main()
{
    void (*pFunction_Print)();
    int (*pFunction_Cal)();

    pFunction_Print = PrintHello;
    pFunction_Print();

    pFunction_Print = PrintBonjour;
    pFunction_Print();

    pFunction_Cal = add;
    printf("%d\n", pFunction_Cal(11, 20));

    pFunction_Cal = mul;
    printf("%d\n", pFunction_Cal(11, 20));
}

void PrintHello()
{
    printf("Hello, World!\n");
}

void PrintBonjour()
{
    printf("Bonjour le monde!\n");
}

int add(int a, int b)
{
    return a + b;
}

int mul(int a, int b)
{
    return a * b;
}