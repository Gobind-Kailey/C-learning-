#include <stdio.h>

int main(){
    int i, j;
    int my_2D_array[2][3] = {1, 5};  

    // print all values. 
    for (i = 0; i<= 1; i++){
        printf("\n");
        for (j=0; j<= 2; j++){
            printf("%d ", my_2D_array[i][j]);
        }
    }



    return 0;
}