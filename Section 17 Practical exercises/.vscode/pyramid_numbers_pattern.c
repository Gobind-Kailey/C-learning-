#include <stdio.h>

// n = number of rows
// We will have n-1 spaces on each side
// The numbers have to always increase by one, the len of each row should increase by one. 
int main(){ 
    
    int n = 3, i, j, start = 0;

    for (i=1; i<=n; i++){
        for (j=1; j<= i; j++){
            printf("%d", j + start);
        }
        printf("\n");
    }

     


    return 0;
}
