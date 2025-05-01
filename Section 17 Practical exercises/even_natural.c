#include <stdio.h>

//   *
//  * *
// * * *

// for the value of num, we want to print those many even numbers starting from 2
int main(){ 

    int num= 4, i, j, currentValue= 1, spaces, hold =num;

    // The first for loop is used to limit the number of numbers in each row/
    for (i=1; i<= num; i++){
        // The second for loop is used to print the number of spaces which depends on nums
        for (spaces = hold - 1; spaces >=1 ; spaces--){
            // printf("Spaces = %d", spaces);
            printf(" ");
        }
        // This for loop will print all the values incrementing.
        for (j=1; j<= i; j++){
                printf(" %d", currentValue);
                currentValue += 1;
            }
        // Printing everything to a new line. 
        printf("\n");
        // Hold represents the number of spaces we will have. 
        hold --;
    }

    return 0;
}
