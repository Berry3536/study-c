#include <stdio.h>

int main()
{
    const int con1 = 10;   // con1 is constant, 10 is literal
    const float con2 = 0.1f;
    const char con3 = 'a';

    //con1 = 11;    // this will occur error

    printf("%d\n", con1);
    printf("%f\n", con2);
    printf("%c\n", con3);
}