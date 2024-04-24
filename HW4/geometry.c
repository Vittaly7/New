#include <stdlib.h>
#include <stdio.h>

int number_of_apexes = 0;
#define hight 30
#define width 80

char field [hight][width];
//make a new type for a point
typedef struct{
    int x;
    int y;
} point;
// 1. поле 30 : 80
void grid ();
// 2. считать имя фигуры
// 3. считать координаты вершин
point* coordinates();
// 4. валидация
int check (point*);
// 5. расставить точки
void apex_output(point* array_of_apexes);
// 6. отрисовка фигур
void draw_shape(point* array);
// 7. щтрисовка треугольника
void draw_triangle(point*a);
void grid_output(char field[hight][width]);


int main (){
    
    grid ();
    point* array_of_apexes = coordinates();
    if(array_of_apexes == NULL) return 1;
    int is_valid = check(array_of_apexes);
    printf("%d\n", is_valid);
    apex_output(array_of_apexes);
    draw_shape(array_of_apexes);
    grid_output(field);
// печатаем координаты

        
    free(array_of_apexes);
    
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
        number_of_apexes = 3;
        point* triangle;
        triangle = (point*)malloc(sizeof(point) * 3);
        if(triangle == NULL) return NULL;
        for(int i = 0; i < 3; ++i){
            printf("Type coordinates: ");
            scanf("%d %d", &triangle[i].x, &triangle[i].y);
        }
        return triangle;
    }
// // read coordinates for a square
    else if(a == 2){
        number_of_apexes = 4;
        point* square;
        square = (point*)malloc(sizeof(point) * 4);
        if(square == NULL) return NULL;
        for(int i = 0; i < 4; ++i){
            printf("Type coordinates: ");
            scanf("%d %d", &square[i].x, &square[i].y);
        }
        return square;
    }
    else if(a == 3){
        number_of_apexes = 4;
        point* rectangle;
        rectangle = (point*)malloc(sizeof(point) * 4);
        if(rectangle == NULL) return NULL;
        for(int i = 0; i < 4; ++i){
            printf("Type coordinates: ");
            scanf("%d %d", &rectangle[i].x, &rectangle[i].y);
        }
        return rectangle;
    }

}
int check (point*a){
    if(a[1].x == a[0].x || a[1].y == a[0].y)
        return 0;
    else if((width - a[0].x) / (a[1].x - a[0].x) == (hight - a[0].y) / (a[1].y - a[0].y)) // вероятно добавить еще оду проверку
        return 0;
    else
        return 1;
}
void apex_output(point* array_of_apexes){
    for(int i = 0; i < number_of_apexes; ++i){
        field[array_of_apexes[i].y][array_of_apexes[i].x] = '#';
    }
}
//заполнение фигуры
void draw_shape(point* array){    
    int up = array[0].y;
    int down = array[0].y;
    int left = array[0].x;
    int right = array[0].x;
    for(int i = 0; i < number_of_apexes; ++i){
        if(up < array[i].y)
            up = array[i].y;
        else if(down > array[i].y)
            down = array[i].y;
        else if(left > array[i].x)
            left = array[i].x;
        else if(right < array[i].x)
            right = array[i].x;
    }
    for(int i = down; i <= up; ++i)
        for(int j = left; j <= right; ++j)
            field[i][j] = '#';
}
void draw_triangle(point*a){
     if((width - a[0].x) / (a[1].x - a[0].x) == (hight - a[0].y) / (a[1].y - a[0].y)){
        for(int i = 0; i < )
     }
        
}