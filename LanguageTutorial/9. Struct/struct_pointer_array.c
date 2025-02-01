#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int position_x;
    int position_y;
}st_Point2D;


int main()
{
    st_Point2D *st_ptr_point2D[3];

    for(int i = 0; i < sizeof(st_ptr_point2D) / sizeof(st_Point2D); i++)
    {
        st_ptr_point2D[i] = malloc(sizeof(st_Point2D));
    }

    st_ptr_point2D[0]->position_x = 1;
    st_ptr_point2D[0]->position_y = 2;
    st_ptr_point2D[1]->position_x = 3;
    st_ptr_point2D[1]->position_y = 4;
    st_ptr_point2D[2]->position_x = 5;
    st_ptr_point2D[2]->position_y = 6;

    printf("%d %d\n", st_ptr_point2D[0]->position_x, st_ptr_point2D[0]->position_y);
    printf("%d %d\n", st_ptr_point2D[1]->position_x, st_ptr_point2D[1]->position_y);
    printf("%d %d\n", st_ptr_point2D[2]->position_x, st_ptr_point2D[2]->position_y);

    for(int i = 0; i < sizeof(st_ptr_point2D) / sizeof(st_Point2D); i++)
    {
        free(st_ptr_point2D[i]);
    }
}