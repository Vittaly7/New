#include <stdlib.h>
#include <stdio.h>

typedef struct{
    int x;
    int y;
} P;

P coordinates (int a, int b);

int main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    P point = coordinates(a, b);
    printf("Point: %d : %d\n", point.x, point.y);

return 0;
}

P coordinates (int a, int b){
    P point;
    if(a >= 0 && b >= 0){
        point.x = a;
        point.y = b;
        return point;
    }
    else printf("invalid coordinates :(\n");
}