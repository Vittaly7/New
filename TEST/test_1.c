#include <stdio.h>
#include <stdlib.h>


int main (){

int* arr = (int*)malloc(sizeof(int) * 10);
if(arr == NULL) return 1;

for(int i = 0; i < 10; ++i)
    arr[i] = 10 - i;

int min = arr[1];
int max = arr[2];


    for(int j = 0; j < 10; ++j){
        if(min > arr[j])
            min = arr[j];
    }
    for(int i = 0; i < 10; ++i){
        if(max < arr[i])
            max = arr[i];
    }

printf("%d\n", max);

arr = (int*)realloc((void*)arr, (sizeof(int) * 12));

for(int i = 0; i < 12; ++i)
    printf("%d ", arr[i]);

printf("\n");

for(int i = 10; i > 0; --i){
    arr[i] = arr[i - 1];
}

for(int i = 0; i < 12; ++i)
    printf("%d ", arr[i]);

printf("\n");


arr[0] = min;
arr[11] = max;

for(int i = 0; i < 12; ++i)
    printf("%d ", arr[i]);

    return 0;
}

