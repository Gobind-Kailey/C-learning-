#include <stdio.h>

/*
    - Func1 -  Gets a point variable and prints info
    - Func2 - Gets a piont input from user and returns it 


*/

typedef struct point
{
  int x; 
  int y; 

}Point;



void printing_point(Point p1)
{
    // printf("hello");
    printf("x = %d, y = %d", p1.x, p1.y);
}

Point get_point()
{
    Point coordinate; 
    puts("Enter a value for x and then y");
    scanf("%d%d", &coordinate.x, &coordinate.y);
    // printf("helele9iop");
    return coordinate;
    
}



int main()
{   
    
    Point x_Y = get_point();
    printing_point(x_Y);


    return 0; 
}