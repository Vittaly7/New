#include <stdlib.h>
#include <stdio.h>

#define width 30;
#define hight 80;

char field [width][hight];
//make a new type for a point
typedef struct{
    int x;
    int y;
} point;
// 1. поле 30 : 80
// 2. считать имя фигуры
// 3. считать координаты вершин
// 4. валидация
// 5. отрисовка фигур
void coordinates(point* triangle, point* square, point* rectangle);
void grid (width, hight);
void grid_output(char field[][]);


int main (){

    grid (width, hight);
    grid_output(field[width][hight]);
// allocate memory for shapes
// allocate memory for a triangle
    point* triangle;
    triangle == (point*)mallock(sizeof(point) * 3);
    if(triangle == NULL) return 1;
// allocate memory for a square
    point* square;
    square == (point*)mallock(sizeof(point) * 4);
    if(square == NULL) return 1;
// allocate memory for a rectangle
    point* rectangle;
    rectangle == (point*)mallock(sizeof(point) * 3);
    if(rectangle == NULL) return 1;



    return 0;
}
// создаем матрицу и заполняем ее.
void grid (width, hight){
    char field [width][hight];
    for(int i = 0; i < width; ++i){
        for(int j = 0; j < hight; ++j){
            if(i == 0 || j == 0 || i == width - 1 || j == hight - 1)
                field[i][j] = '#';
            else
                field[i][j] = ' ';
        }
    }
    }
// выводим на экран
void grid_output(char field[width][hight]){
    for(int i = 0; i < width; ++i){
        for(int j = 0; j < hight; ++j){
            printf("%c", field[i][j]);
        }
        printf("\n");
    }

}
// read coordinates
void coordinates(point* triangle, point* square, point* rectangle){
    int a = 0;
    printf("Pick a number\n");
    printf("1 - a triangle\n");
    printf("2 - a square");
    printf("3 - a rectangle");

    scanf("%d", &a);
    if(a < 1 || a > 3){
        printf("Pick a NEW number\n");
        printf("1 - a triangle\n");
        printf("2 - a square");
        printf("3 - a rectangle");

        scanf("%d", &a);
    }
// read coordinates for a triangle
    else if(a == 1){
        for(int i = 0; i < 3; ++i){
            printf("Type coordinates: ");
            scanf("%d %d", &triangle[i].x, &triangle[i].y);
        }
    }
// // read coordinates for a square
    else if(a == 2){
        for(int i = 0; i < 4; ++i){
            printf("Type coordinates: ");
            scanf("%d %d", &square[i].x, &square[i].y);
        }
    }

}