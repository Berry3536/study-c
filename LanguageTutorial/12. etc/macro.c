#include <stdio.h>

#define ARRAY_SIZE  10                              // MACRO
#define PRINT_NUM(number)   printf("%d\n", number)  // MACRO (as function type)
#define NEW_LINE()          printf("\n")            // MACRO (as function type)

int main()
{
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        PRINT_NUM(i);
    }
    NEW_LINE();

#undef ARRAY_SIZE
#define ARRAY_SIZE  5
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        PRINT_NUM(i);
    }
    NEW_LINE();

#define printf
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        PRINT_NUM(i);
    }
}
