#include <stdio.h>

// goal is to calcualte the sum of each of the digits of number
/*


973 --> 9 + 7 + 3

digits_sum(973) --> 3 + digits_sum(97) = 3 + 16 = 19
digits_sum(97) --> 7 + digits(9) = 16
digits_sum(9) --> 9



*/


int digits_sum(int num)
{
    if(num <= 9) return num; 
      
    return num%10 + digits_sum(num/10);
}


int main()
{

    // int current_sum = 0;
    int num; 
    puts("Enter a number to calculate the sum of its digits: ");
    scanf("%d", &num);
    int result = digits_sum(num);
    printf("Result = %d: ", result);
    return 0; 
}