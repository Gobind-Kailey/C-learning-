#include <stdio.h>

// If n = 3:
//1
//22
//333

int main(){
    int n = 5, i, j;

    for(i= 1; i <=n; i++){
        for(j = 1; j<=i; j++){
            printf("%d", i);
        }
        printf("\n");
    }


    return 0;
}