#include <stdio.h>

#pragma pack(push, 1)   // align the struct with 1 byte size
typedef struct
{
    char member_char;
    int member_int;
}st_SampleStruct;
#pragma pack(pop)

int main()
{
    st_SampleStruct st_sample1;

    printf("%d\n", sizeof(st_sample1.member_char));
    printf("%d\n", sizeof(st_sample1.member_int));
    printf("%d\n", sizeof(st_sample1));             // it's now 5 byte
    printf("%d\n", sizeof(st_SampleStruct));        // it's now 5 byte
}