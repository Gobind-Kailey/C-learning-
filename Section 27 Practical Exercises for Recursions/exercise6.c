#include <stdio.h>

// The below code goes from 5 --> 1 --> 5 by not repeating 1. 

int one_n(int num, int i)
{
   if(i == num) return 0;
   printf("%d ", i+ 1); 
   return one_n(num, i + 1);     

}

int n_one(int num)
{
   if(num == 0) return 0; 
   printf("%d ", num); 
   return n_one
(num -1);     

}

int main()
{
    int num, i = 0, j =5; 
    puts("Enter a number n");
    scanf("%d", &num);
    int reverse = n_one(num);

    int result = one_n(num, i +1);
    // puts(" ");
    // printf("Result = %d", result);
    return 0; 
}