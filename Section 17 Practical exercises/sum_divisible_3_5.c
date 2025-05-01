#include <stdio.h>

// Write program that takes nums input and sums up all of the numbers that are divisable by 
// 3 and 5 inbetween. 

int main(){
    int num = 115, sum = 0, i;

    // for (i = 15; i<= num; i+= 15){
    //     if (i%15 == 0){
    //         sum += i;
    //     }
    // }
    // for (i = 15; i<= num; i+= 15){
    //     sum += i;
    // }
    // printf("sum = %d", sum);


    // Sum of what can be divided by 3 or 5. 
    for (i = 3; i<= num; i++){
        if (i%5 == 0 || i%3 == 0){
            sum += i;
        }
    }   
    printf("sum = %d", sum);


    return 0;
}