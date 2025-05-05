#include <stdio.h>

/*
Get three parameter input: 

total = 3, char1 = , char2 =  --> 



*/

void specialsequencePrint(int total, char char1, char char2)
{

    if(total >= 1)
    {
        printf("%c", char1);
        specialsequencePrint(total -1, char1, char2);
        printf("%c", char2);
        printf("%c", char2);

    }
}


int main()
{
    int total;
    char char1, char2;  
    puts("Enter a interger value for 'Total', and character value for 'char1' and 'char2'");
    scanf("%d %c %c", &total, &char1, &char2);
    printf("total = %d, char1 = %c, char2 = %c\n", total, char1, char2);
    // sequence(total*2, num1, num2, count);
    specialsequencePrint(total, char1, char2);

    return 0; 
}