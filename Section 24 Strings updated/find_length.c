#include <stdio.h>

// write a function that can read a string from the user and output the length of the string using a seperate function. 

int find_length(char *string_input)
{
    int i, count = 0;
    for(i = 0; string_input[i] != '\0'; i++)
    {
        count ++; 
    }
    printf("String entered: %s\n", string_input);
    return count; 
}


int main()
{
    // making a string that has a max length of 20

    char string_input[20]; 
    puts("Enter a string that has a length of less than 20");
    // fgets(string_input, sizeof(string_input), stdin);
    gets(string_input); // this will not give you a max length of 20
    int string_length = find_length(string_input);
    printf("String length = %d", string_length);
    return 0; 
}