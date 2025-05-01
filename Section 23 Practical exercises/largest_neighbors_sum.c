#include <stdio.h>

// Write a program that prints the largest sum of neighbors
// Ex: 1,4,3,7,1 --> 3+7 = 10;


// We will use two pointers.   
#define SIZE 5
int main(){
    int i = 0, j = 1;
    int largest = 0;
    int lst[SIZE] = {5,7,1,5,2};

    while (j != SIZE){
        if (lst[i] + lst[j] > largest){
            largest = lst[i] + lst[j]; 
        }
        i += 1;
        j += 1;
    }
    printf("Largest sum = %d", largest);





    return 0;
}