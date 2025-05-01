#include <stdio.h>

// If the value is greater than double or triple then we will print neither
/*  */
int main(){
    int num = 944;

    if (num/10 >0 && num/10 <10)
        printf("Double-Digit");
    else if(num/100 > 0 && num/100 < 10)
        printf("Triple-Digit");
    else 
        printf("Neither");


    return 0;
}