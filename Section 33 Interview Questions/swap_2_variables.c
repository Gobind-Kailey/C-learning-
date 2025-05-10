#include <stdio.h>

// Our goal is to swap using two variables 
// I will be preforming a bitwise swap


int main()
{
    int x = 5;
    int y = 8; 
    
    x = x + y; // 5 + 8 = 13
    y = x - y; // 13 - 8 = 5 
    x = x - y; // 13 - 5 = 8 

    printf("New values: x = %d, y = %d", x, y);

    return 0; 
}