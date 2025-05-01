#include <stdio.h>


float average_calculate(float num1, float num2, float num3){
    float average;
    average = (num1 + num2 + num3 )/3;
    return average;
}

int main(){
    float num1 =90 , num2 =90.5, num3= 91; 
    float avg;
    avg = average_calculate(num1, num2, num3);
    printf("%.2f", avg);
    return 0;
}