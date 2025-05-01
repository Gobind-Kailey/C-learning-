#include <stdio.h>

int main(){
    int year= 2024;

    if (year %4 ==0){
        if (year % 100 == 0){
            if (year %400 == 0){
                printf("Leap Year");
            }
        printf("Not Leap Year");
        }
    printf("Leap Year");
    }
    else
        printf("Not Leap Year");
        
    return 0;
}