#include <stdio.h>

// Find the number of even numbers in a sequence. 

int even()
{
    int user_input;
    puts("Enter a number: ");
    scanf("%d", &user_input);

    if(user_input%2 == 0) return (1 + even()); 
    if(user_input == -1) return 0;
    return even(); 
}



int main()
{
    
    int result = even();
    printf("Result = %d", result);
    return 0;  

}