#include <stdlib.h>
#include <stdio.h>

typedef struct{
    int x;
    int y;
} P;

P* coordinates (int a, int b);

int main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    P* point1 = coordinates(a, b);
    printf("Point: %d : %d\n", (*point1).x, point1 -> y);
    printf("point1 : %p\n", point1);
    free(point1);
    printf("point1 : %p\n", point1);

return 0;
}

P* coordinates (int a, int b){
    P* point;
    point = (P*)malloc(sizeof(point));
//  if()
    printf("point : %p\n", point);
    if(a >= 0 && b >= 0){
        point -> x = a;
        (*point).y = b;
        return (point);
    }
    else printf("invalid coordinates :(\n");
}