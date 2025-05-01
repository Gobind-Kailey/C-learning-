#include <stdio.h>

// Program should print all numbers from 1 to the num value and then print it forwards and
// backwords.
int main(){ 

    int num = 5, i;

    for (i=1; i<= num; i++){
        printf("%d ", i);
    }
    printf("\n");
    for (i=num; i>= 1; i--){
        printf("%d ", i);
    }

    return 0;
}
