#include <stdio.h>
#include <float.h>

int main()
{
    float my_float;
    double my_double;
    long double my_long_double;

    float num1 = 0.1f;
    double num2 = 3867.215820;

    float min_float = FLT_MIN;
    float max_float = FLT_MAX;

    printf("%d byte\n", sizeof(my_float));
    printf("%d byte\n", sizeof(my_double));
    printf("\n");
    
    printf("%f\n", num1);
    printf("%f\n", num2);
    printf("\n");

    min_float = min_float / 1000000000.0f;
    max_float = max_float * 1000.0f;
    printf("%e %e\n", min_float, max_float);
}