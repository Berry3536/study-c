#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool b1 = true;

    if(b1 == true)
    {
        printf("True\n");
    }
    else
    {
        printf("false\n");
    }

    printf("%d byte\n", sizeof(b1));
    printf("%d", b1);
}