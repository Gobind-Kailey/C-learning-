#include <stdio.h>

/*
Get three parameter input: 

total = 3, num1 = 2, num2 = 4 --> 222444



*/

int sequence(int total, int num1, int num2, int count)
{


    if(total == 0)
    {
        // printf("Does it cone here");
        return 0; 
    }
    // printf("Does it conefdg here");
    if (total > count/2) printf("%d", num1);
    else printf("%d", num2);

    return sequence(total-1, num1, num2, count);


}
// Better solution 

void specialsequencePrint(int total, int num1, int num2)
{

    if(total >= 1)
    {
        printf("%d", num1);
        specialsequencePrint(total -1, num1, num2);
        printf("%d", num2);
    }
}


int main()
{
    int total, num1, num2, count; 
    puts("Enter a interger value for 'Total', 'num1' and 'num2'");
    scanf("%d%d%d", &total, &num1, &num2);
    count = total*2; 
    printf("total = %d, num1 = %d, num2 = %d\n", total, num1, num2);
    // sequence(total*2, num1, num2, count);
    specialsequencePrint(total, num1, num2);

    return 0; 
}