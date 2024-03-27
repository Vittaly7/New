#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int x;
    int y;
} Point;

int main (){
//storing on stack
    Point p1 = {.x = 4, .y = 5};
    printf("%d, %d\n", p1.x, p1.y);
//storing on heap
    Point* p2;
    p2 = malloc(sizeof(Point));
// почему срабатывает условие if, если убрать комментарии?
    //if(p2 == NULL); return 1;
    (*p2).x = 10;
    (*p2).y = 2;
    printf("%d, %d\n", (*p2).x, (*p2).y);
    free (p2);

    return 0;
}