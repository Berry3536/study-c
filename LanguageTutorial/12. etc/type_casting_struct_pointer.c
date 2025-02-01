#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char c1;
    int num1;
}st_Sample;


int main()
{
    st_Sample *ptr_st_sample = malloc(sizeof(st_Sample));
    void *ptr_void;

    ptr_st_sample->c1 = 'a';
    ptr_st_sample->num1 = 10;

    ptr_void = ptr_st_sample;

    printf("%c\n", ((st_Sample *)ptr_void)->c1);
    printf("%d\n", ((st_Sample *)ptr_void)->num1);

    free(ptr_st_sample);
}