#include <stdio.h>
#include <string.h>

#define IN
#define OUT

typedef struct
{
    char name[20];
    int age;
    char address[100];
}stPerson;

void PrintPerson(stPerson person);
void PrintPerson_Pointer(stPerson *pperson);

int main()
{
    stPerson Person_t;
    stPerson *pPerson_t;
    pPerson_t = &Person_t;

    strcpy(Person_t.name, "Andy");
    Person_t.age = 30;
    strcpy(Person_t.address, "Seoul, Korea");

    PrintPerson(Person_t);
    PrintPerson_Pointer(pPerson_t);
}

void PrintPerson(stPerson person)
{
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);
    printf("Address: %s\n", person.address);
    printf("\n");
}

void PrintPerson_Pointer(stPerson *pperson)
{
    printf("Name: %s\n", pperson->name);
    printf("Age: %d\n", pperson->age);
    printf("Address: %s\n", pperson->address);
    printf("\n");
}