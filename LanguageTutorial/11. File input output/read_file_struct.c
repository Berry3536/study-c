#include <stdio.h>

#pragma pack(push, 1)
typedef struct
{
    char c1;        // 1  byte
    short num1;     // 2  byte
    int num2;       // 4  byte
    char s1[20];    // 20 byte
}stSampleData;

#pragma pack(pop)

int main()
{
    stSampleData SampleData_t;

    FILE *pFile = fopen("data2.bin", "rb");

    fread(&SampleData_t, sizeof(SampleData_t), 1, pFile);

    printf("%c %d %d %s\n", SampleData_t.c1, SampleData_t.num1, SampleData_t.num2, SampleData_t.s1);

    fclose(pFile);
}