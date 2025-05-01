#include <stdio.h>

/*
int divisor(int num){
    int i, sum = 1 + num;
    for (i = 2; i< num; i++){
        if (num %i == 0){
            sum += i;
            printf("Divisor = %d \n", i);
        }

    }
    return sum;
}
*/

// Optamized solution:
// Check if the number can be divided by %2 == 0, and then check if each even can. 
// It can only be divisiable by values <= n/2

/*
int divisor(int num){
    int i, sum = 1 + num;
        if (num %2 == 0){
            for (i = 2; i<= num/2; i+= 2){
                if (num %i == 0){
                    sum += i;
                    printf("Divisor = %d \n", i); //28
                } 
            }
        for (i = 3; i<= num/2; i+= 2){
            if (num %i == 0){
                sum += i;
                printf("Divisor = %d \n", i); //28
            } 
        }
        
        }return sum;
}
*/

// His solution 
// We need to go up till the dqrt of a number because each value we get, it comes with a pair that could
// be mulitplied to get the num value. 

int optamized_divisor(int num){
    int i, sum = 1 + num;

    for (i = 2; i*i<= num; i++){
        if (num%i == 0){
            sum = sum + i +(num/i);
        }
    }
    return sum;

}
int main(){

    int num = 12;
    printf("Sum = %d" , optamized_divisor(num));

    return 0;
}
