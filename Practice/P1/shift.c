#include <stdlib.h>
#include <stdio.h>

void print(int*, int);
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
   
    free(arr);
return 0;
}
void print(int* arr, int a){
    for(int i = 0; i < a; ++i)
        printf("%d ", arr[i]);
    printf("\n");

}