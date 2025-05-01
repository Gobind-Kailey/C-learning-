#include <stdio.h>


int main(){ 

    int num = 7, i, total = 0;

    for (i= 1; i<=num; i++){
        total += i;
    }
    printf("%d", total);

    return 0;
}
