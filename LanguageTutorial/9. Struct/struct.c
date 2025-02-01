#include <stdio.h>
#include <string.h>

struct _Person   // struct tag(name)
{
    char name[20];
    int age;
    char address[20];
};

typedef struct _Person  // struct tag(name)
{
    char name[20];
    int age;
    char address[20];
}st_Person;    // struct alias


typedef struct  // anonymous struct
{
    char name[20];
    int age;
    char address[20];
}st_Person;    // struct alias
    
int main()
{
    struct _Person p1;
    st_Person st_person1;

    strcpy(p1.name, "Andy");
    p1.age = 30;
    strcpy(p1.address, "Seoul, Korea");

    printf("name : %s\n", p1.name);
    printf("age : %d\n", p1.age);
    printf("address : %s\n", p1.address);

    printf("\n");

    strcpy(st_person1.name, "Andy");
    st_person1.age = 30;
    strcpy(st_person1.address, "Seoul, Korea");

    printf("name : %s\n", st_person1.name);
    printf("age : %d\n", st_person1.age);
    printf("address : %s\n", st_person1.address);
}