#include <stdio.h>

// The user will enter values until there is a valid grade and it will print a message
int main(){
    int grade;
    do{
        printf("Enter a valid grade from 0-100: ");
        scanf("%d", &grade);
    } while (grade < 0 || grade > 100);
    
    printf("Thanks! You've inserted %d, which is a legit grade!", grade);

    return 0;
}