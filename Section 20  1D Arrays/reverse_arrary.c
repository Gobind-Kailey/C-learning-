#include <stdio.h>

// we want to print the array in reverse.  
#define SIZE 10
int main(){
    int i;
    int pull_ups[SIZE] = {3,4,3,5,7,8,6,9,9,10};

    for (i= SIZE - 1; i >= 0; i--){
        printf("number = %d\n", pull_ups[i]);
    }
    return 0;
}

