#include <stdio.h>

// we will be given num and our goal is to print the sum of each of the digits
int main(){
    int num = 531, total_hundred, total_tenth, total_one, total;

    total_hundred = num/100;
    total_tenth = (num%100)/10;
    total_one = num%10;
    total = total_hundred + total_tenth + total_one;

    printf("Total = %d",total );
    return 0;
}