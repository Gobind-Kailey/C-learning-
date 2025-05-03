#include <stdio.h>

// Return the number of apperances of a specific character


int occurances(char letter)
{
    char input_char;
    puts("Enter a character of your choice, if '$' is entered it will exit the code");
    // need the &, so we can store it in the correct memory location. 
    scanf("%c", &input_char);
    // This will remove the enter that is pressed, which makes it ready for the next input. 
    // If you run the code without getchar() it will take ti as 2 inputs and print line 9 twice. 
    // getchar() reads a single input from the terminal (keyboard) input. 
    getchar();

    if(input_char == '$') return 0;
    if(input_char == letter) return 1 + occurances(letter);
    return occurances(letter);
    
    

    
}


int main()
{
    char letter = 'c'; 
    int result = occurances(letter);
    printf("Result = %d", result); 

    return 0; 
}