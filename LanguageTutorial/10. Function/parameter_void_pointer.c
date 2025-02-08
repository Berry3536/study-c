#include <stdio.h>

#define IN
#define OUT

typedef enum
{
    TYPE_CHAR,
    TYPE_INT,
    TYPE_FLOAT
}enTYPE;

void SwapValue(OUT void *ptr1, OUT void *ptr2, enTYPE type);

int main()
{
    char c1 = 'a';
    char c2 = 'b';
    SwapValue(&c1, &c2, TYPE_CHAR);
    printf("%c %c\n\n", c1, c2);

    int num1 = 10;
    int num2 = 20;
    SwapValue(&num1, &num2, TYPE_INT);
    printf("%d %d\n\n", num1, num2);

    float num3 = 1.234567f;
    float num4 = 7.654321f;
    SwapValue(&num3, &num4, TYPE_FLOAT);
    printf("%f %f\n\n", num3, num4);
}


void SwapValue(OUT void *ptr1, OUT void *ptr2, enTYPE type)
{
    switch (type)
    {
    case TYPE_CHAR:
    {
        char temp;
        temp = *(char *)ptr1;
        *(char *)ptr1 = *(char *)ptr2;
        *(char *)ptr2 = temp;
        break;
    }
    case TYPE_INT:
    {
        int temp;
        temp = *(int *)ptr1;
        *(int *)ptr1 = *(int *)ptr2;
        *(int *)ptr2 = temp;
        break;
    }
    case TYPE_FLOAT:
    {
        float temp;
        temp = *(float *)ptr1;
        *(float *)ptr1 = *(float *)ptr2;
        *(float *)ptr2 = temp;
        break;
    }
    default:
        break;
    }
}