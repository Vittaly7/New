#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    int x;
    int y;
}Point;

typedef struct{
    char name[50];
    char id[10];
    int age;
    int grades[5];
} Student;

typedef struct{
    int* arr;
    } Data;

void print_points(Point points[10]);
void print_student(Student Kevin);

int main(){

    Student Kevin;
    strcpy(Kevin.name, "Kevin");
    strcpy(Kevin.id, "000112233");
    Kevin.age = 19;
// function call    
    print_student(Kevin);
// declaration and assignment
    Point P1 = {5, 10};
    Point P2 = {.x = 2, .y = 7};
// assignment operation of structs
    P1 = P2;
    printf("P1.x: %d\n", P1.x);
    printf("P1.y: %d\n", P1.y);

    printf("P2.x: %d\n", P2.x);
    printf("P2.y: %d\n", P2.y);
// struct array;
    Point points[10];
    for(int i = 0; i < 10; ++i){
        points[i].x = i;
        points[i].y = 10 - i;
    }
// function call
    print_points(points);

// allocate memory to an array in struct
    Data x;
    Data y;
    x.arr = (int*)malloc(sizeof(int) * 10);
    if(x.arr == NULL) return 1;
    y.arr = (int*)malloc(sizeof(int) * 20);
    if(y.arr == NULL) return 1;
    for(int i = 0; i < 10; ++i)
        x.arr[i] = i;
    for(int i = 0; i < 10; ++i)
        printf("%d\n", x.arr[i]);


    return 0;
}
void print_student(Student Kevin){
    for(int i = 0; i < 5; ++i){
        Kevin.grades[i] = i + 1;
        printf("%d, ", Kevin.grades[i]);
    }
    printf("\n");
    printf("%d\n", Kevin.age);
    printf("%s\n", Kevin.name);
    printf("%s\n", Kevin.id);
}
void print_points(Point points[10]){
    for(int i = 0; i < 10; ++i)
        printf("P%d = (%d : %d)\n", i, points[i].x, points[i].y);
}