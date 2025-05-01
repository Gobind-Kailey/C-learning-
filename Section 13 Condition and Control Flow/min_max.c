#include <stdio.h>

int main(){
    // Find max/min within 2 float numbers

    /*
    float num1 = 44.3, num2 = 33.4;

    if (num1 > num2){
        printf_s("max = %.2f\n", num1 );
        printf_s("min = %.2f", num2 );
    } 
    else{
        printf_s("max = %.2f\n", num2 );
        printf_s("min = %.2f", num1 );
    }
    */

    // Find max/min within 3 numbers. (The better method)

    /*
    int num1= 4324232, num2 = 1234234, num3 = 323434423;
    int max = num1, min =num2;

    if (num1 < num2){
        max = num2;
        min = num1;
    }
    
    if (max < num3){
        max = num3;
    }
    
    if (min > num3){
        min = num3;        
    }
    printf_s("Max = %d, Min = %d\n", max, min);


    // His slower method. 

    if (num1 > num2){
        if (num2 > num3)
            // When your just printing you dont require the {}
            printf_s("Min = %d", num3);
        else 
            printf_s("Min = %d", num2);
        }
    
        if (num2 > num3)
            printf_s(" Max= %d", num2);
        else
            printf_s(" Max= %d", num3);
    */
  
    return 0;
}
