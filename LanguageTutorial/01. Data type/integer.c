#include <stdio.h>

int main()
{
    char my_char;
    short my_short;
    int my_int;
    long my_long;
    long long my_longlong;

    unsigned char my_unsigned_char;
    unsigned short my_unsigned_short;
    unsigned int my_unsigned_int;
    unsigned long my_unsigned_long;
    unsigned long long my_unsigned_longlong;

    printf("%d byte\n", sizeof(my_char));
    printf("%d byte\n", sizeof(my_short));
    printf("%d byte\n", sizeof(my_int));
    printf("%ld byte\n", sizeof(my_long));
    printf("%lld byte\n", sizeof(my_longlong));
    printf("\n");

    printf("%d byte\n", sizeof(my_unsigned_char));
    printf("%d byte\n", sizeof(my_unsigned_short));
    printf("%u byte\n", sizeof(my_unsigned_int));
    printf("%lu byte\n", sizeof(my_unsigned_long));
    printf("%llu byte\n", sizeof(my_unsigned_longlong));
}