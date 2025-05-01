#include <stdio.h>

// Palidrome --> when you can read from the left and right side and they are equal
// [1,2,3,3,2,1] --> Palidrome
// [1,2,1,43] --> Not a palidrome


// Note that if it is an odd length it can still be a palidrome, bc left and right can ==. 

// Create two loops and keep checking if both of the values match until j = SIZE/2
# define SIZE 5
int main(){

    int i = 0, j = SIZE- 1;
    int cont = 1;
    int palidrome[SIZE] = {1,2,3,2,1};
    
    while (j >= SIZE/2){
        if (palidrome[i]!= palidrome[j]){
            printf("Not Palidrome\n");
            cont = 0;
            break; 
        }
        j -= 1;
        i += 1;
    }
    // printf("%d", cont);
    if (cont == 1){
        printf("Palidrome");
    }

    return 0;
}