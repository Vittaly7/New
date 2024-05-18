#include <stdio.h>

int find_an_average(int arr[], int length);

int main (){
int length = 9;
int arr[] = {1,2,3,4,5,6,7,8,9};

int result = find_an_average(arr,length);
printf("%d\n", result);

    return 0;
}
int find_an_average(int arr[], int length){
    int average = 0;
    int sum = 0;
    for(int i = 0; i < length; ++i){
        sum += arr[i];
    }
average = sum/length;

return average;
}