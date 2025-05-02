#include <stdio.h>

// Recieve the factorial of a number 

int factorial(int num)
{
    if(num == 0) return 1; 
    return num*factorial(num -1);
}

/*
factorial(3) --> return 3*factorial(2)
factorial(2) --> return 2*factorial(1)
factorial(1) --> return 1

*/
int main()
{
    int num;
    puts("Enter a numer to take the Factorial of: ");
    scanf("%d", &num);
    int result = factorial(num);
    printf("%d", result);
    return 0; 
}