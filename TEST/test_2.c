#include <stdio.h>
void sum_of_elements(int, int*);

int main(){
    int sum = 0;
    int arr[] = {2,4,5,6,7,3,4,7};

sum_of_elements(sum, arr);


return 0;
}
void sum_of_elements(int, int*){
int sum;
int arr[8];

for(int i = 0; i < 8; ++i){
    printf("at index %d : value is %d", i, arr[i]);
    sum += arr[i];
    printf("%d\n", sum);
}
printf("%d\n", sum);
}