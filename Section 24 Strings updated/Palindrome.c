#include <stdio.h>
#include <string.h>

// Checking how strlen works 
// char word[] = "Gobind";
    // int length = strlen(word);
    // printf("%d", length); 


/*
Check if a word is a palindrome or not: 
I would use two pointers, and keep checking if the values are the same, if they are not we return not palindrome
otherwise we return palidrome. 

Implimentation: 


*/

int main()
{
    char user_string[20]; 
    puts("Enter a string of your choice"); 
    // this will retain a specific size 
    fgets(user_string, sizeof(user_string), stdin);
    int i = 0, j = strlen(user_string) -2;  // includes the enter press
    // printf("%d", j);     
    
    int palindrome = 1; // true when this is 1
    if((j+1)%2 != 0){ 
        while(i != j)
        {
            if(user_string[i] != user_string[j])
            {
                palindrome = 0; 
            }  
            i++;
            j--; 
        }
    }
    else
    {           // gobind, gallag
        while((i != j + 1) && (j != i-1))
        {
            if(user_string[i] != user_string[j])
            {
                palindrome = 0; 
            }  
            i++;
            j--; 
            printf("(%d, %d)\n", i, j);
        } 
    }
    if(palindrome == 1) printf("Palindrome");
    else printf("Not Palindrome");

    return 0;
}