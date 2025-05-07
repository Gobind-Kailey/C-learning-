#include <stdio.h>

#define SIZE 8  

// Samething as before but with uppercase letters

// couterArr[i] reps how many times each letter was called "look up table"

int find_max_index(int *couterArr)
{
    int i;
    int max_index = 0; 
    printf("Starting max_index = %d\n", max_index);
    // 0-9
    for(i = 0; i < 53; i++)
    {
        if (couterArr[i] > couterArr[max_index])
            max_index = i;
        // printf("%c\n", couterArr[i]);
    }
    if(max_index >= 0 && max_index <= 25) printf("max_index uppercase = %c\n", max_index + 'A');
    else if(max_index >= 26 && max_index <= 51) printf("max_index lowercase = %c\n", max_index -26 + 'a');
    else if(max_index == 52) printf("max_index space = ' '");
    printf("Number of apperences: %d", couterArr[max_index]);
}


int main()
{
    char charArr[SIZE] = {'K', 'O', 'c', 'R', 'C', ' ', 'K', 'r'};

    int counterArr[53] = {0};
    int i; 
    for (i= 0; i < SIZE; i++)
    {
        if(charArr[i] >= 'A' && charArr[i]<= 'Z') counterArr[charArr[i]-'A']++; // 0-25

        else if(charArr[i] >= 'a' && charArr[i]<= 'z') counterArr[charArr[i]- 'a' + 26]++; // 26-52

        else if(charArr[i] == ' ') counterArr[52]++; // 52
        
    }
    // printf("Here");
    find_max_index(counterArr);

    return 0; 
}