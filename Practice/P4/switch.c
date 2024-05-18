#include <stdio.h>

int main (){
    int num = 24;
    for (int i = 0; i <= num; ++i){ 
        switch (i){
            case 24:
                printf("Case 4\n");
            case 11:
                printf("Case 2\n");
            default:
                printf("Default case %d\n", i);
        }
    }
    printf("Below switch statement\n");

    return 0;
}