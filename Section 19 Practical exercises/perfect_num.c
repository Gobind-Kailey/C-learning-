#include <stdio.h>

// A perfect number is a numebr that can have all of its divsers add up (excpet itself) and see if it adds
// to th num itself. 

int is_perfect(int num){
    int i, sum = 1;
    for (i = 2; i*i <= num; i++){
        if(num %i == 0){
            sum = sum + i + (num/i);
        }
    }
    if (sum == num){
        printf("Perfect number : ");
        return 1;
    }
    return 0;
}

int main(){
    int num = 16;

    printf("%d", is_perfect(num));


    return 0;
}