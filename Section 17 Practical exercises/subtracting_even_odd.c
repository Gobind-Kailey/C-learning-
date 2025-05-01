#include <stdio.h>

// num will represent a number and our job is to check if the numbers last digits are
// even or odd, and once we know we will sum up all even and odd values, and finally
// we will do evensum - oddsum

int main(){
    int num = 654;
    int eventotal = 0, oddtotal = 0;
    int current_digit, operation;
    
    while (num > 0){
        current_digit = num %10;
        // printf("%d\n", current_digit);
        if (current_digit %2 == 0){
            eventotal += current_digit;
        }
        else{
            oddtotal += current_digit;
        }
        num = num / 10;
    }
    // printf("Even total = %d\n", eventotal);
    // printf("Odd total = %d\n",oddtotal);

    operation = eventotal - oddtotal;
    printf("Final sum = %d\n", operation);
    return 0;
}