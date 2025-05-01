#include <stdio.h>

// User inputs a float value and our job is to extract the deciamal and print it. 
int main(){
    int num;
    float data = 12.7, temp;

    // printf("Pick a random float value");
    // scanf("%f", &data);

    num = (int)data;
    temp = data - num;

    printf("Decimal part = %.2f", temp);

 



    return 0;
}