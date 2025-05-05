#include <stdio.h>


/*
Alternate solution to exercise9.c


I wrote notes on my Ipad if this doesnt make sense 

*/

int evenOddFunc(int n)
{
    if (n < 10) // 1 Digit Number --> Even Position 
        if(n%2 == 0)
            return 1; 
        else 
            return 0; 

    if (n < 100) // 2 Digits number --> Right most digit (even pos.) left is (odd pos.)
        if ( n %10 %2 == 0 && n / 10 % 2 == 1)
            return 1; 
        else 
            return 0; 

    if ((n % 10 % 2 == 0) && (n/10 % 10 % 2 == 1))
        return evenOddFunc(n/100); 
    else 
        return 0;

}


int main()
{
    int user_input; 
    puts("Enter a number:");
    scanf("%d", &user_input);
    evenOddFunc(user_input);




    return 0; 
}