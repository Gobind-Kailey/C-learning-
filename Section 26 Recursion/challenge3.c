#include <stdio.h>


/*
total_digits(973) --> 1+ total_digits(973/10) --> 1 + 2 = 3
total_digits(97) --> 1+ total_digits(97/10) --> 1 + 1 = 2
total_digits(9) --> 1


*/

int total_digits(int num)
{

    if(num <= 9) return 1;
    return 1+ total_digits(num/10);
    
}


int main()
{
    int num; 
    puts("Enter a number to calculate the sum of its digits: ");
    scanf("%d", &num);
    int result = total_digits(num);
    printf("Result = %d: ", result);
    return 0; 
}