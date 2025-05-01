#include <stdio.h>

// Ternary operators take three orpihands (condition)? True:False 
// True indicates what happens when it comes out to be true
int main(){
    int num1= 5, num2 = 7;
    int max;
    max = (num1>num2)? printf("5 is greater"):printf("7 is greater");
    //printf_s("%d", max);

    return 0;
}