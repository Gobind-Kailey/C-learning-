#include <stdio.h>


// Finding the max value inputted 

int findMax(int num, int current_max)
{
    int user_input; 
    puts("Enter a number:");
    scanf("%d", &user_input);

    if(user_input > current_max) current_max = user_input;
    // printf("Updating Current Max: %d\n", current_max); 

    if(num <= 1) return current_max;
    // printf("user input: %d\n", user_input); 
    // printf("Current Max: %d\n", current_max); 

    return findMax(num - 1, current_max);
    // return current_max;
}


int main()
{
    int num = 3; 
    int current_max = 0; 
    int result = findMax(num, current_max); 
    printf("Result = %d", result);
    return 0; 
}