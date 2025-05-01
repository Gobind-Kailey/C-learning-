#include <stdio.h>

// We are checking which quadrant we are in. 
int main(){
    int x= 5, y = -300;

    if (x>0 && y>0)
        printf("Q1");
    else if (x>0 && y<0)
        printf("Q4");
    else if (x<0 && y<0)
        printf("Q3");
    else if (x<0 && y>0)
        printf("Q2");
    else 
        printf("Orgin");

    return 0;
}