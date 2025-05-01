#include <stdio.h>

// If grade >= 60 then print congratulations, otherwise print failed, try again. 
int main(){

    int grade;
    scanf("%d", &grade);
    if (grade >= 60)
        printf_s("Congratulations! \n");
    else
        printf_s("Failed... Try again \n");

    return 0;
}