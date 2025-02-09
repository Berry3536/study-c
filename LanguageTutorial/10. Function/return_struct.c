#include <stdio.h>
#include <memory.h>
#include <string.h>

typedef struct
{
    char name[20];
    int age;
    char address[100];
}stPerson;

stPerson GetPerson();
stPerson *AllocPerson();

int main()
{
    stPerson Person_t;
    stPerson *pPerson_t;

    Person_t = GetPerson();
    pPerson_t = AllocPerson();

    printf("Name: %s\n", Person_t.name);
    printf("Age: %d\n", Person_t.age);
    printf("Address: %s\n", Person_t.address);
    printf("\n");

    printf("Name: %s\n", pPerson_t->name);
    printf("Age: %d\n", pPerson_t->age);
    printf("Address: %s\n", pPerson_t->address);

    free(pPerson_t);
}

/**
 * return struct -> struct copy occurred
 */
stPerson GetPerson()  
{
    stPerson Person_t;

    strcpy(Person_t.name, "Andy");
    Person_t.age = 30;
    strcpy(Person_t.address, "Seoul, Korea");

    return Person_t;   // return struct
}

/**
 * return struct pointer -> No struct copy occurred
 */
stPerson *AllocPerson()
{
    stPerson *Person_t = malloc(sizeof(stPerson));

    strcpy(Person_t->name, "Andy");
    Person_t->age = 30;
    strcpy(Person_t->address, "Seoul, Korea");

    return Person_t;   // return struct pointer
}