#include <stdio.h>



int even(int num)
{
    if((num < 10)) return num;
    return num%10 + even(num/10);
}   


int main()
{
    int num; 
    puts("Enter number: ");
    scanf("%d", &num);
    int result = even(num); 
    if(result%2 == 0) printf("Even");
    else if (result%2 != 0) printf("Odd");

    return 0; 
}