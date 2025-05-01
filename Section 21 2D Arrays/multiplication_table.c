#include <stdio.h>

# define SIZE 11
int main(){

    int i, j;
    // remember that an array will go up till SIZE -1
    int mat[SIZE][SIZE];

    // Creating the array. 
    // Represents the row number
    for(i=1;i<SIZE; i++){ 
        // Represents the column number
        for(j=1;j<SIZE;j++){
            mat[i][j] = i*j; 
            // printf("%5d", mat[i][j]);
        }
        // printf("\n");
    }

    // Printing the array below. 
    // Could also be written in one line as seen above without // 
    for(i=1;i<SIZE; i++){
        for(j=1;j<SIZE;j++){
            // mat[i][j] = i+j; 
            printf("%5d", mat[i][j]);
        }
        printf("\n");
    }



    return 0;
}