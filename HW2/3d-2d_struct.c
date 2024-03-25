#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct two_d {
    int x;
    int y;
};
struct three_d{
    int x;
    int y;
    int z;
};

int main (){
    struct two_d Point1;
    Point1.x = 5;
    Point1.y = 10;

    struct two_d Point2;
    Point2.x = 6;
    Point2.y = 11;

// расчитать координаты P3
    struct two_d Point3;
    Point3.x = Point1.x;
    Point3.y = Point2.y;
// длина катитов
    int P1_P3 = Point3.y - Point1.y;
    int P3_P2 = Point2.x - Point3.x;
//длина гипотенузы
    double P1_P2_rezult = sqrt(pow((double)P1_P3,2) + pow((double)P3_P2, 2));

    printf("%f\n", P1_P2_rezult);

    struct three_d Doom;
    Doom.x = 3;
    Doom.y = 3;
    Doom.z = 3;
    
    return 0;
}