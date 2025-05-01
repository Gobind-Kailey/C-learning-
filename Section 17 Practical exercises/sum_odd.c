#include <stdio.h>

// We recieve a value of n which represents the number of numbers
// We input those many numbers
// If it is an odd number we will sum it to the oddtotal else skip. 

int main(){
    int n = 3, i, input;
    int oddTotal = 0;

    for (i = 1; i<= n; i++){
        
        printf("Enter a number ");
        scanf("%d", &input);
        
        if (input %2 != 0){
            oddTotal += input;
        }
    }
    printf("Sum = %d", oddTotal);

    return 0;
}