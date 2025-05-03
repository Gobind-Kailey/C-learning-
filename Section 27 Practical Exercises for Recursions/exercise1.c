#include <stdio.h>

/*
We have to write a recursive - function that will recieve an integer value "num"
read a sequence of numbers from the user... Up till -1 arrives 
return the total numbers smaller than the num value

Example: 
num = 5
6, 8, 10 , 2, -1

In this case the function should return 1 



find_smaller(4, {4, 2, -1, 6, 7, 8 ,0 , 13}) --> 
find_smaller(4, 2) 


*/

int find_smaller(int num)
{
    int input; 
    printf("Enter a number: ");
    scanf("%d", &input);
    if(input == -1) return 0; 
    if(input < num) return (1 + find_smaller(num)); 

    return find_smaller(num);

    
}


int main()
{
    int num = 4; 
    int result = find_smaller(num);
    printf("Result = %d", result); 

    return 0; 
}