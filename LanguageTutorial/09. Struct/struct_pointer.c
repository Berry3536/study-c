#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char name[20];
    int age;
    char address[20];
}st_Person;
    
int main()
{
    st_Person *ptr_st_person1 = malloc(sizeof(st_Person));

    strcpy(ptr_st_person1->name, "Andy");
    ptr_st_person1->age = 30;
    strcpy(ptr_st_person1->address, "Seoul, Korea");

    printf("size of st_Person structure is : %d\n", sizeof(st_Person)); // 1byte(char) * 20 + 4byte(int) + 1byte(char) * 20
    printf("name : %s\n", ptr_st_person1->name);
    printf("age : %d\n", ptr_st_person1->age);
    printf("address : %s\n", ptr_st_person1->address);

    free(ptr_st_person1);
}