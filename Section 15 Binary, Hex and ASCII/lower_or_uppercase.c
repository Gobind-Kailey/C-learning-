#include <stdio.h>

// print if character is upper case, lower, digit or other. 
// Procedure: We will use the ASCII able 
int main(){
    char character = '5';
    int value;
    value = ("%d", character);
    printf("VALUE = %d\n", character);


    if (value >= 97 &&  value <= 122)
        printf("Lowercase Letter");
        
    else if (value >= 65 &&  value <= 90)
        printf("Uppercase Letter");
        
    else if (value >= 48 &&  value <= 57)
        printf("Digit");
    
    else
        printf("Other");
    

    return 0;
}