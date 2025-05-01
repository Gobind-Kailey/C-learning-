#include <stdio.h>


int main(){

    int num =5, pow = 5, i;
    int sum= 1;

    for (i = 1; i <= pow; i++)
    {
        sum *= num;
    }
    printf("Sum = %d", sum);
    return 0;
}