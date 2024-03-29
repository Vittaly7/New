#include <stdlib.h>
#include <stdio.h>
// 1. поле 30 : 60
// 2. считать имя фигуры
// 3. считать координаты вершин
// 4. валидация
// 5. отрисовка фигур

void grid ();
void grid_output();


int main (){


    return 0;
}
// создаем матрицу и заполняем ее.
void grid (){
    char field [30][60];
    for(int i = 0; i < 30; ++i){
        for(int j = 0; j < 60; ++j){
            if(i == 0 && j == 0 && i == 29 && j == 59)
                field[i][j] = "*";
        }
    }
}

void grid_output(){


}