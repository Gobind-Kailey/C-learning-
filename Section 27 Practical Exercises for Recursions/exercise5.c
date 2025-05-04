#include <stdio.h>


int print_numbers(int num, int i)
{
   if(i == num) return 0;
   printf("%d ", i+ 1); 
   return print_numbers(num, i + 1);     

}

int print_numbers_back(int num)
{
   if(num == 0) return 0;
   printf("%d ", num); 
   return print_numbers_back(num -1);     

}

int main()
{
    int num, i = 0, j =5; 
    puts("Enter a number n");
    scanf("%d", &num);
    int result = print_numbers(num, i);
    puts(" ");
    int reverse = print_numbers_back(num);
    // printf("Result = %d", result);
    return 0; 
}