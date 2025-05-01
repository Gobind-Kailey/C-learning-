#include <stdio.h>

// If the length is less than 10, we will return the length counting till the num value
// Else we will print those many 9's
// if it is -value, we will return -1 

int numbers_sequence(int length){
    int i, total_numbers =0, multiplier = 1;
    for (i= length; i> 0; i--){
        total_numbers += ( i*multiplier );
        multiplier *= 10;
    }
    return total_numbers;
    }

long sequence(int length){
    long multiplier = 1, i;
    long total = 0;

    if (length <0){
        return -1;
    }

    for (i = 1; i<= length; i++){
        total += (multiplier*9);
        multiplier *= 10;
    }

    return total;

}

int main(){

    int length = 14;

    if (length < 0){
        printf("Invalid Input: %d", length);
    }

    else if (length <= 9){
        printf("%d", numbers_sequence(length));
    }

    else{
        printf("%ld", sequence(length)); // Not sure how to print this, ask professor. 
    }

    return 0;
}