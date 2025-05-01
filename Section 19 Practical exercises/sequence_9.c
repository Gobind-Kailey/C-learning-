#include <stdio.h>

long sequence(int length){
    int multiplier = 1, i;
    long total = 0;

    if (length <0){
        return -1;
    }

    for (i = 1; i<= length; i++){
        total += (multiplier*9);
        multiplier *= 10;
    }

    return total;
}

int main(){

    int length = 10;
    printf("Sequence = %d", sequence(length));
    return 0;
}