#include <stdio.h>
#include <string.h>

int main(){

char string [] = "I can print anything I want";
char string_cpy[50];
strcpy(string_cpy, string);
printf("%s\n", string);
printf("%s\n", string_cpy);

int length = strlen(string);
printf("length: %d\n", length);

//count the number of letters
int count = 0;
for(int i = 0; i < length; ++i){
    if(string[i] == 'i' || string[i] == 'I')
        count ++;
}
printf("The number of I -s: %d\n", count);
    return 0;
}