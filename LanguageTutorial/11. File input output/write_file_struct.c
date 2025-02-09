#include <stdio.h>

#pragma pack(push, 1)
typedef struct
{
    short num1; // 2byte
    short num2; // 2byte
    short num3; // 2byte
    short num4; // 2byte
}stSampleData;
#pragma pack(pop)

int main()
{
    stSampleData SampleData_t;

    SampleData_t.num1 = 100;
    SampleData_t.num2 = 200;
    SampleData_t.num3 = 300;
    SampleData_t.num4 = 400;

    FILE *pFile = fopen("data.bin", "wb"); // read in binary mode
    
    fwrite(&SampleData_t, sizeof(SampleData_t), 1, pFile);

    fclose(pFile);
}