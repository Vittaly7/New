#include <stdlib.h>
#include <stdio.h>

#define width 30;
#define hight 80;

char field [width][hight];
// 1. поле 30 : 80
// 2. считать имя фигуры
// 3. считать координаты вершин
// 4. валидация
// 5. отрисовка фигур

void grid (width, hight);
void grid_output(char field[][]);


int main (){

    grid (width, hight);
    grid_output(field[width][hight]);

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