#include <stdio.h>


int main(){
    int i, j;
    int arr[2][3] = {{1,4,45}, {3, 2, 42}};
    
    // printf("Element Address = %lu\n", &arr[0]); //1256193536
    // printf("Element Address = %lu", &arr[1]);   //1256193540

    for (i=0; i<= 1; i++){
        for (j=0; j<= 2; j++){
            printf("Address = %lu\n", &arr[i][j]); 
        }
    }
    
    return 0;
}