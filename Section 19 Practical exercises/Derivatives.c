#include <stdio.h>
#include <math.h>


float derivative(float c, float x, float n){
    float derivative;
    derivative = (float)c*n*pow(x,n-1);
    return derivative;

}


int main(){
    float c = 4, x= 2, n= 3;
    printf("derivative = %.2f", derivative(c, x, n));


    return 0;
}