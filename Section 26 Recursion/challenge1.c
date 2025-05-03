#include <stdio.h>

// Our goal is to make a fibonacci sequence 
/*
if n = 5 then it would equal the sum of the alst two indexes so 3 + 2  = 5 and n = 6 -->  = 5 + 3 = 8


example: n = 4
fib(4) = fibonacci(3) + fibonacci(2) = 2 + 1
fib(3) = fib(2) + fib(1) = 1 + 1
fib(2) = fib(1) + fib(0) = 1 + 0

*/



int fibonacci(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 1;
    
    
    return fibonacci(n-1) + fibonacci(n-2); 
    

}


int main()
{
    int num; 
    puts("Enter a index value that you would like to find the fibonacci series of: ");
    scanf("%d", &num);
    int result = fibonacci(num);
    printf("Result = %d: ", result);
    return 0; 
}