#include <stdio.h>
#include <stdint.h>

#pragma pack(push, 1)
typedef struct
{
    uint8_t member_1 : 1;
    uint8_t member_2 : 3;
    uint8_t member_3 : 5;
}st_SampleStruct;
#pragma pack(pop)

int main()
{
    st_SampleStruct st_samplestruct;

    st_samplestruct.member_1 = 1;  // 0000 0001;
    st_samplestruct.member_2 = 7;  // 0000 0111;
    st_samplestruct.member_3 = 31; // 0001 1111;

    printf("%d\n", st_samplestruct.member_1);
    printf("%d\n", st_samplestruct.member_2);
    printf("%d\n", st_samplestruct.member_3);

    printf("%d\n", sizeof(st_SampleStruct));
    printf("%d\n", sizeof(st_samplestruct));
    printf("%d\n", sizeof(uint8_t));
    // printf("%d\n", sizeof(st_samplestruct.member_1));    // cannot get sizeof struct bit field
    // printf("%d\n", sizeof(st_samplestruct.member_2));    // cannot get sizeof struct bit field
    // printf("%d\n", sizeof(st_samplestruct.member_3));    // cannot get sizeof struct bit field
}
