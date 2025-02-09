#include <stdio.h>
#include <stdbool.h>

void print_Hello(void);
int get_Integer(void);
float get_float(void);
bool get_bool(void);

int main()
{
    print_Hello();
    int num1;
    float num2;
    bool is_Bool;

    num1 = get_Integer();
    num2 = get_float();
    is_Bool = get_bool();

    printf("%d\n", num1);
    printf("%f\n", num2);
    printf("%d\n", is_Bool);
}

void print_Hello(void)
{
    printf("%s\n", "Hello!!!");
}

int get_Integer(void)
{
    return 1;
}

float get_float(void)
{
    return 1.234567f;
}

bool get_bool(void)
{
    return true;
}