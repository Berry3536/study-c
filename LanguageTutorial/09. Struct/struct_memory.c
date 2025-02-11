#include <stdio.h>
#include <memory.h>

typedef struct
{
    int position_x;
    int position_y;
}st_Point2D;


int main()
{
    st_Point2D st_point2D_1;
    st_Point2D st_point2D_2;

    /* set struct memory */
    memset(&st_point2D_1, 0, sizeof(st_Point2D));    // set st_point2D as 0 for sizeof(st_Point2D)

    printf("x : %x\n", st_point2D_1.position_x);
    printf("y : %x\n", st_point2D_1.position_y);
    printf("\n");


    /* copy struct memory */
    memcpy(&st_point2D_2, &st_point2D_1, sizeof(st_Point2D));
    printf("x : %x\n", st_point2D_2.position_x);
    printf("y : %x\n", st_point2D_2.position_y);
}