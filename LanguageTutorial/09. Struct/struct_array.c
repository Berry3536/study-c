#include <stdio.h>

typedef struct
{
    int position_x;
    int position_y;
}st_Point2D;


int main()
{
    st_Point2D st_point2D[3];

    st_point2D[0].position_x = 1;
    st_point2D[0].position_y = 2;
    st_point2D[1].position_x = 3;
    st_point2D[1].position_y = 4;
    st_point2D[2].position_x = 5;
    st_point2D[2].position_y = 6;

    printf("%d %d\n", st_point2D[0].position_x, st_point2D[0].position_y);
    printf("%d %d\n", st_point2D[1].position_x, st_point2D[1].position_y);
    printf("%d %d\n", st_point2D[2].position_x, st_point2D[2].position_y);
}