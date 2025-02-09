#include <stdio.h>

int main()
{
    int num1 = 1;

    switch (num1)
    {
    case 1: // if there is no break statement, compile will be continued
    case 2:
        printf("%s\n", "num1 is 1 or 2");
        break;
    
    case 3: // if there is no break statement, compile will be continued
    case 4:
        printf("%s\n", "num1 is 3 or 4");
        break;

    default:
        break;
    }
}