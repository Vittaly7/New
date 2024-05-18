#include <stdio.h>
#include <stdio.h>

int main (){

    int A[3][4] = {{1,2,3,4},
                   {1,2,3.4},
                   {1,2,3,4}};
    int B[4][3] = {{1,2,3},
                   {1,2,3},
                   {1,2,3},
                   {1,2,3}};
    int C[3][3] = {{0,0,0},
                   {0,0,0},
                   {0,0,0}};

    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            for(int k = 0; k < 4; ++k)
                C[i][j] += A[i][k] * B[k][j];
        }
    }

    for(int i = 0; i < 4; ++i){
        for(int j = 0; j < 4; ++j)
            printf("%4d, ", C[i][j]);
        printf("\n");
    }

    return 0;
}