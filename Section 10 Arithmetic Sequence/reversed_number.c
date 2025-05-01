#include <stdio.h>

// Print the number reversed
int main(){


    int num = 531, total_hundred, total_tenth, total_one, reversed;

    total_hundred = num/100;
    total_tenth = (num%100)/10;
    total_one = num%10;
    
    reversed = total_hundred + total_tenth*10 + total_one*100;
    // printf("Reversed = %d%d%d", total_one,total_tenth,total_hundred);
    printf("Reversed = %d", reversed);
    



    return 0;
}