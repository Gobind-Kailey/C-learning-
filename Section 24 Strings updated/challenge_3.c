#include <stdio.h>
#include <string.h>

// Creating a program that reads string from user and outputs the number of words 
/*
My plan: 

Create a function that can dispher the amount of words present:
impliementaion: 
    Create a while loop that will run until we have reached the null character '\0'
    and everytime we incounter a space we will increamnet a word_counter. 
    return the word_counter 


*/
int word_counter(char *sentence)
{
    int i = 0; 
    int word_count = 0; 
    while(sentence[i] != '\0')
    {
        if(sentence[i]== ' ' && sentence[i+1] != ' ') word_count ++; 
        i++;
    }
    return word_count + 1;

}


int main()
{
    char sentence[20]; 
    printf("Enter an sentence of your choice\n");
    gets(sentence);
    int word_count = word_counter(sentence);
    printf("The word count is: %d", word_count);

    return 0; 
}