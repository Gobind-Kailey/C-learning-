#include <stdio.h>

// Find the SUM of even numbers in a sequence. 

int sum_even()
{
    int user_input;
    puts("Enter a number: ");
    scanf("%d", &user_input);

    if(user_input%2 == 0) return (user_input + sum_even()); 
    if(user_input == -1) return 0;
    return sum_even(); 
}



int main()
{
    
    int result = sum_even();
    printf("Result = %d", result);
    return 0;  

}