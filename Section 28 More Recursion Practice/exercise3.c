#include <stdio.h>

/*
Get three parameter input: 

total = 3, val = 'c'



*/

void specialsequencePrint(int total, char char1)
{

    if(total >= 1)
    {
        printf("%c", char1);
        specialsequencePrint(total -1, char1);
        printf("%c", char1 - 32);   // or do printf("%c", val - 'a' + 'A')
        // printf("%c", char1 - 32);

    }
}


int main()
{
    int total;
    char char1;  
    puts("Enter a interger value for 'Total', and character value for 'char1' and 'char2'");
    scanf("%d %c", &total, &char1);
    printf("total = %d, char1 = %c\n", total, char1);
    // sequence(total*2, num1, num2, count);
    specialsequencePrint(total, char1);

    return 0; 
}