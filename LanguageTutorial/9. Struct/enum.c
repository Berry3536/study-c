#include <stdio.h>

typedef enum
{
    monday = 0,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday = 51,
    sunday
}en_SampleEnum;

int main()
{
    int today;

    today = wednesday;

    switch (today)
    {
    case monday:
    case tuesday:
    case wednesday:
    case thursday:
    case friday:
        printf("%s\n", "Go to work");
        break;
    
    case saturday:
        printf("%s\n", "Have some drink");
        break;
    
    case sunday:
        printf("%s\n", "Take some rest in home");
        break;

    default:
        break;
    }
}