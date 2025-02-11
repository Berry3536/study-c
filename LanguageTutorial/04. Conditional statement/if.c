#include <stdio.h>

int main()
{
    int num1;

    num1 = 20;

    if(num1 == 10)  // 0 -> false, positive num & negative num -> true
    {
        printf("num1 은 10입니다.");
    }
    else if(num1 == 20)
    {
        printf("num1 은 20입니다.");
    }
    else
    {
        printf("num1 은 10이 아닙니다.");
    }
}