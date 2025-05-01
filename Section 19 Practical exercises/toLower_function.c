#include <stdio.h>

// Function name - toLower 
// If the characters are all uppercase, our job is to return that in lower case
// Otherwise if there are lowercase values, we will return - 1

// His method of doing this:

char toLower(char letter){
    if (letter >= 'A' && letter <= 'Z'){
        letter = letter + ('a' - 'A');
        // printf("%d", letter);
        return letter; // int value. 
    }
    else
        return -1;
}

char toUpper(char letter){
    if (letter >= 'a' && letter <= 'z'){
        letter = letter - ('a'- 'A');
        return letter;
    }
    return -1;
}
int main(){
    char letter = 'A';
    int value = toLower(letter);
    printf("Lower case = %c", value);
    return 0;
}
