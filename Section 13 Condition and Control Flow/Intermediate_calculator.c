#include <stdio.h>

// User gets to pick the values and the operation 
// Catch the zerodivision-error
int main(){
    int num1, num2;
    char operation;
    float result;

    // For some odd reason the order of doing this matters
    printf_s("Enter the operation you would like to preform: ('+', '-', '*', '/')\n");
    scanf("%c", &operation);
    
    printf_s("Enter two numbers\n");
    scanf("%d %d", &num1, &num2);

    switch (operation)
    {
    case '+':
        result= (double)num1 + num2;
        break;
    case '-':
        result= (double)num1 - num2;
        break;
    case '*':
        result= (double)num1 * num2;
        break;
    case '/':
        if (num2 != 0){
            result= (double)num1 / num2;
        }
        else
            printf("Invalid input");
        break;
    default:
        printf_s("You have entered an invalid operator\n");
        break;
    }
    printf_s("The result of the operation = %.2f", result);
    return 0; 
}


