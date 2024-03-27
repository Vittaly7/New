#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int x;
    int y;
} Point;

int main (){
    Point p1 = {.x = 4, .y = 5};
    printf("%d, %d\n", p1.x, p1.y);



    return 0;
}