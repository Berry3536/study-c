#include <stdio.h>

#define IN
#define OUT

void PrintString_pointer(char *string);
void PrintString_array(char string[]);

int main()
{
    char s1[20] = "I'm from array";
    
    PrintString_pointer("I'm from pointer");
    PrintString_array(s1);
}

void PrintString_pointer(char *string)
{
    printf("%s\n", string);
}

void PrintString_array(char string[])
{
    printf("%s\n", string);
}