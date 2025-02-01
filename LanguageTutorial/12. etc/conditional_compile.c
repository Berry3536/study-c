#include <stdio.h>

#define MODE_A
#define MODE_SECURITY   2

int main()
{
#ifdef MODE_A
    printf("%s\n", "A mode");
#endif

#if MODE_SECURITY > 3
    printf("%s\n", "security level of MODE is higher than 3");
#else
    printf("%s\n", "security level of MODE is lower than 3");
#endif
}