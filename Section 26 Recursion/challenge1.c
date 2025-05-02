#include <stdio.h>

// Our goal is to make a fibonacci sequence 
/*
if n = 5 then it would equal the sum of the alst two indexes so 3 + 2  = 5 and n = 6 -->  = 5 + 3 = 8

*/

int fibonacci(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 1;
    
    

}


int main()
{
    int num; 
    puts("Enter a number that you would like to find the fibonacci series of: ");
    scanf("%d", &num);
    int result = fibonacci(num);
    printf("Result = %d: ", result);
    return 0; 
}