#include <stdio.h>


int main(){

    int num;
    int i;

    printf("Hellow! Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i<= num; i++)
    {
        printf("%d\n", i);
    }
 
    return 0;
}