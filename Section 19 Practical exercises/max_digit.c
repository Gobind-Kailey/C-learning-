#include <stdio.h>

void maximum(int num){
    int max;
    max = num%10;

    if (num/10 > max){
        max = num/10;
    }

    printf("Max value = %d", max);
}

int main(){
    int num = 35;
    if (num >= 10 && num <= 99){
        maximum(num);
    }

    return 0;
}