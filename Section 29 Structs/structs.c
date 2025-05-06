#include <stdio.h>


// Structures  


struct point
{
    int x; 
    int y; 
};

struct date 
{
    int day;
    int month;
    int year; 
};


int main()
{

    struct point p1; 
    struct date myDate1; 
    
    printf("Enter X coordinate: ");
    scanf("%d", &p1.x);
    printf("Enter Y coordinate: ");
    scanf("%d", &p1.y);




    return 0; 
}