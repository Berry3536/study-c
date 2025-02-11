#include <stdio.h>

typedef struct
{
    char member_char;
    int member_int;
}st_SampleStruct;

int main()
{
    st_SampleStruct st_sample1;

    printf("%d\n", sizeof(st_sample1.member_char));
    printf("%d\n", sizeof(st_sample1.member_int));
    printf("%d\n", sizeof(st_sample1));             // not 5 byte, it's 8 byte
    printf("%d\n", sizeof(st_SampleStruct));        // not 5 byte, it's 8 byte
}