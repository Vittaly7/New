#include <stdlib.h>
#include <stdio.h>

void print(int*, int);
void shift (int* arr, int length, int number);
void one_element_shift (int* arr, int length);
int main (){
    int a = 0;
    scanf("%d", &a); // ввод пользователя
    int* arr = (int*)calloc(a, sizeof(int)); // выделили память, заполнили 0
    if(arr == NULL) return 1;
    print(arr, a);
    scanf("%d", &a);
    arr = (int*)realloc(arr, sizeof(int) * a);
    if(arr == NULL) return 1;
    print(arr, a);
    for(int i = 0; i < a; ++i)
        arr[i] = i;
    print(arr, a);
    int shift_num = 0;
    scanf("%d", &shift_num);
    shift (arr, a, shift_num);
    print(arr, a);
    free(arr);
return 0;
}
void print(int* arr, int a){
    for(int i = 0; i < a; ++i)
        printf("%d ", arr[i]);
    printf("\n");

}
void one_element_shift (int* arr, int length){
    int a = 0;
    a = arr[length - 1];
    for(int i = 1; i < length; ++i){
        arr[length - i] = arr[length - i - 1];
    }
    arr[0] = a;
}
void shift (int* arr, int length, int number){
    for(int i = 0; i < number; ++i)
        one_element_shift (arr, length);
}