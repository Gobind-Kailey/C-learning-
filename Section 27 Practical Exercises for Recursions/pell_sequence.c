#include <stdio.h>


// Pell Number
/*

Wrote notes on Ipad

num below represents a specific index 
*/

// recursive
int pellnumR(int num)
{
    if(num == 0) return 0; 
    if(num == 1) return 1; 
    return 2*pellnumR(num - 1) + pellnumR(num - 2);
}

// non-recursive

int pellnumNR(int num)
{
    if(num == 0) return 0; 
    if(num == 1) return 1; 

    int i = 1; 
    int previous1 = 1;
    int previous2 = 0;
    int next; 
    while(i != num)
    {   
        // shifting everything over by 1. 
        int next = previous1; 
        previous1 = 2*(previous1) + previous2;
        previous2 = next; 
        
        i++; 
    }
    printf("%d", previous1); 
    return previous1;  

}


int main()
{

    pellnumNR(4);

    return 0; 
}