#include <stdio.h>

// The given array should be shifted to the left. 

// Ex: 5,4,7,3 -- > 3,5,4,7
#define SIZE 4
#define N 1 

int main(){

    int i, j, k; 
    int lst[SIZE] = {5,4,7,3};
    for (k =1; k <= N; k++){
        int temp = lst[SIZE -1];

        for (i = SIZE - 1; i >= 0; i--){
            if (i == 0){
                lst[i] = temp;
            }
            else{
                lst[i] = lst[i-1];
            }
        }
    }
    for (j = 0; j < SIZE; j++){
        printf("new list numbers = %d\n", lst[j]);
    }
    return 0;

}