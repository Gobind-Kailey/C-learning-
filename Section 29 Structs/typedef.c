#include <stdio.h>


/*

typedef int GRADE

the GRADE in this statement can replace the int anywhere. 
- This is also useful because it reduces the amount you have to type repeated words 
    while still having access to the entire word 

Ex. Date myDate1     VS    struct myDate1 d1

*/

typedef struct point 
{
    int x;
    int y;
}Point; 

int main()
{
    // Declaring p1 without initialization 
    Point p1; 

    // Position arguments 
    Point p2 = {2, 3};

    // Key arguments 
    Point p3 = {.x = 2, .y = 3};

    // Everything else initialized with 0
    Point p3 = {.x = 2};
    
    return 0; 
}