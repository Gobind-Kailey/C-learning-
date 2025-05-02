#include <stdio.h>

/*
Using recursion to find the sum up to "n";

*/

// int summing(int i, int n, int total)
// {   
//     if(i == n) return n;

//     return total + summing((i + 1), n, total);;
// }

// int main()
// {
//     int n, total = 0; 
//     int i = 1;
//     printf("Enter a number you would like to get a sum uptill\n");
//     scanf("%d", &n); 
//     int result = summing(i,n,total);
//     printf("%d", result);
//     return 0; 
// }


// n = 3 --> 3 + 3 (summing(2)) = 6
// n = 2 --> 2 + 1 (summing(1))
// n = 1 --> 1

int summing(int n)
{
    if (n == 1) return 1;
    // printf("WOrking?");
    return n + summing(n - 1); 
}  

int main()
{
    int n;
    int result;
    // int i = 1;
    printf("Enter a number you would like to get a sum uptill\n");
    scanf("%d", &n); 
    result = summing(n);
    printf("Result = %d", result);
    return 0; 
}
