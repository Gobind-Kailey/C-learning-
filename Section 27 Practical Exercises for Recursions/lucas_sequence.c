#include <stdio.h>

/*
Lucas Sequence... 
 
        {2 if n = 0
L-index {1 if n = 1
        {L-n-1 + L-n-2, if n > 1

    Ex: 2, 1, 3, 4, 7


*/
int lucasRecursive(int n)
{
    if (n == 0) return 2;
    if (n == 1) return 1;
    return lucasRecursive(n - 1) + lucasRecursive(n-2);
    


}

int main()
{


    return 0; 
}