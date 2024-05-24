#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char* col;
    int pow;
    double mass;
    char* name;
}car;

car* fill_in(char*col, int pow, double mass, char*name);

int main(){


car*Vesta = fill_in("red\0", 80, 2.5, "Lada\0");
printf("Color: %s\nPower: %d\nMass: %f\nName: %s\n", Vesta->col, Vesta->pow, Vesta->mass, Vesta->name);

    return 0;
}
car* fill_in(char*col, int pow, double mass, char*name){

    car* Vesta;
    Vesta = (car*)malloc(sizeof(car));
    if(Vesta == NULL) return NULL;
    Vesta->col = col;
    Vesta->pow = pow;
    Vesta->mass = mass;
    Vesta->name = name;



    /*int length = strlen(col);
    char*cvet = (char*)malloc(sizeof(char) * length);
    if(cvet == NULL) return NULL;*/

    return Vesta;
}