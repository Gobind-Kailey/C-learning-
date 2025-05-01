#include <stdio.h>
#include <math.h>

// Calculate the distance between two points sqrt(pow(x1-x2, 2)+ pow(y1-y2, 2))
int main(){
    float x1 =1 , y1 = 3, x2 = 4, y2 = 7;
    float distance;

    distance = sqrt(pow(x1-x2, 2)+ pow(y1-y2, 2));
    printf("Distance = %.2f", distance );

    return 0;
}