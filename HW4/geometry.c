#include <stdlib.h>
#include <stdio.h>

#define hight 30
#define width 80

char field [hight][width];
//make a new type for a point
typedef struct{
    int x;
    int y;
} point;
// 1. поле 30 : 80
// 2. считать имя фигуры
// 3. считать координаты вершин
// 4. валидация
int check (point*);
// 5. отрисовка фигур
point* coordinates();
void grid ();
void grid_output(char field[hight][width]);


int main (){
    
    grid ();
    grid_output(field);
    point* catch = coordinates();
// печатаем координаты
    int b = check(catch);
    printf("%d\n", b);

        
    free(catch);
    
    return 0;
}
// создаем матрицу и заполняем ее.
void grid (){
    for(int i = 0; i < hight; ++i){
        for(int j = 0; j < width; ++j){
            if(i == 0 || j == 0 || i == hight - 1 || j == width - 1)
                field[i][j] = '#';
            else
                field[i][j] = ' ';
        }
    }
    }
// выводим на экран
void grid_output(char field[hight][width]){
    for(int i = 0; i < hight; ++i){
        for(int j = 0; j < width; ++j){
            printf("%c", field[i][j]);
        }
        printf("\n");
    }

}
// read coordinates
point* coordinates(){
    int a = 0;
    while(a < 1 || a > 3){
        printf("Pick a NEW number\n");
        printf("1 - a triangle\n");
        printf("2 - a square\n");
        printf("3 - a rectangle\n");

        scanf("%d", &a);
    }
// read coordinates for a triangle
    if(a == 1){
        point* triangle;
        triangle = (point*)malloc(sizeof(point) * 3);
        if(triangle == NULL) return 1;
        for(int i = 0; i < 3; ++i){
            printf("Type coordinates: ");
            scanf("%d %d", &triangle[i].x, &triangle[i].y);
        }
        return triangle;
    }
// // read coordinates for a square
    else if(a == 2){
        point* square;
        square = (point*)malloc(sizeof(point) * 4);
        if(square == NULL) return 1;
        for(int i = 0; i < 4; ++i){
            printf("Type coordinates: ");
            scanf("%d %d", &square[i].x, &square[i].y);
        }
        return square;
    }
    else if(a == 3){
        point* rectangle;
        rectangle = (point*)malloc(sizeof(point) * 4);
        if(rectangle == NULL) return 1;
        for(int i = 0; i < 4; ++i){
            printf("Type coordinates: ");
            scanf("%d %d", &rectangle[i].x, &rectangle[i].y);
        }
        return rectangle;
    }

}
int check (point*a){
        if((width - a[0].x) / (a[1].x - a[0].x) == (hight - a[0].y) / (a[1].y - a[0].y))
            return 0;
        else
            return 1;
    }
