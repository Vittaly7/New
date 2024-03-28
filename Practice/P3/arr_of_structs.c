#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int x;
    int y;
} Point;

int main (){
// generating a struct variable
    Point* array; // points to the 1st element of an array of structs
//allocating memory for an array of structs
    int length = 10;
    array = (Point*)malloc(sizeof(Point) * length);

    array[0].x = 1;
    array[0].y = 8;
    array[1].x = 15;
    array[1].y = 4;
    array[2].x = 7;
    array[2].y = 2;
    for(int i = 0; i < 3; ++i)
        printf("%d : %d\n", array[i].x, array[i].y);

    for(int i = 0; i < length; ++i){
        array[i].x = i;
        array[i].y = length - i;
        printf("P(%d) = %d : %d\n", i, array[i].x, array[i].y);
    }
    printf("\n");
// reallocating memory for an array of structs
    length = 4;
    array = (Point*)realloc(array, sizeof(Point) * length);
    for(int i = 0; i < length; ++i){
        array[i].x = i;
        array[i].y = length - i;
        printf("P(%d) = %d : %d\n", i, array[i].x, array[i].y);
    }
    /*
//storing on stack
    Point p1 = {.x = 4, .y = 5};
    printf("%d, %d\n", p1.x, p1.y);
//storing on heap
    Point* p2;
    p2 = malloc(sizeof(Point));
// почему срабатывает условие if, если убрать комментарии?
    //if(p2 == NULL); return 1;
    (*p2).x = 10;
    p2 -> y = 2 + 10;
    printf("%d, %d\n", (*p2).x, p2 -> y);
    free (p2);
    */
   free (array);
    return 0;
}