#include <stdio.h>

int main()
{
    int num1;
    float num2;
    double num3;
    char char1;

    scanf("%d %f %lf %c", &num1, &num2, &num3, &char1);

    printf("%d %f %f %c", num1, num2, num3, char1);
}