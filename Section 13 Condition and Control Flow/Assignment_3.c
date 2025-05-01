#include <stdio.h>

int main(){
    int num1 = 7, num2= 3, num3, equivalent1, equivalent2;
    
    
// Challenge #1
    //equivalent1 = (num1 == num2)? printf("EQUAL\n"): printf("NOT EQUAL\n");
// Challenge #2
    //equivalent2 = (num1 == num2 && num1 == num3)? printf("EQUAL\n"): printf("NOT EQUAL\n");
// Challenge #3
    int num4 = 234, outcome;
    int ones, ten, hundred;

    ones = num4 %10;
    //printf("%d", ones);
    ten = (num4%100)/10;
    //printf("%d", ten);
    hundred = (num4/100);
    //printf("%d", hundred);
    outcome = (hundred < ten && ten < ones)? printf("ASCENDING\n"): printf("NOT ASCENDING\n");
    // Get the individual digits and then compare if they in ascending order


// Challenge #4

    int num5 = 10;

    if (num5 > 0)
        printf("1");
    else if(num5 == 0)
        printf("0");
    else if(num5 < 0) 
        printf("-1");
    else 
        printf("Invalid input");

    return 0;
}   