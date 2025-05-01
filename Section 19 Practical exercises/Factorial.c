#include <stdio.h>

int factorial(int num){
    int total =1, i;
    if (num < 0){
        return -1;
    }
    
    for (i=num; i > 0; i--){
        total *= i;
    }   
    return total;
}

int main(){
    int num = 3;
    int total = factorial(num);
    printf("%d", total);
    return 0;
}