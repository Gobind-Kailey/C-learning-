#include <stdio.h>

int main(){
    char grade;
    printf("Enter a grade from A-F\n");
    scanf("Grade = %s", grade);

    switch(grade){
        case 'A': // Grade = A
            printf("Grade is between 90-100");
            break;
        case 'B': // Grade = B
            printf("Grade is between 80-89");
            break;
        case 'C': // Grade = C
            printf("Grade is between 70-79");
            break;
        case 'D': // Grade = D
            printf("Grade is between 60-69");
            break;
        default: // This is an optional line. It is like the else statement
            printf("Error... Try Again!");
                break;
    }
    return 0;
}