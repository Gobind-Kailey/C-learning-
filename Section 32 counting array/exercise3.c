#include <stdio.h>

#define SIZE 8  

// Samething as before but with uppercase letters

int find_max(int *couterArr)
{
    int i;
    int max = couterArr[0]; 
    printf("Starting Max = %d\n", max);
    // 0-9
    for(i = 0; i < 53; i++)
    {
        if(couterArr[i] > max)
            max = i;    // max reps the index here 
        // printf("%c\n", couterArr[i]);
    }
    if(max >= 0 && max <= 25) printf("Max uppercase= %c\n", max + 'A');
    else if(max >= 26 && max <= 51) printf("Max lowercase = %c\n", max + 70);
    else if(max == 52) printf("Max space = ' '");
    printf("Number of apperences: %d", couterArr[max]);
}


int main()
{
    char charArr[SIZE] = {'K', 'O', 'c', 'R', 'C', ' ', 'K', 'r'};

    int counterArr[53] = {0};
    int i; 
    for (i= 0; i < SIZE; i++)
    {
        if(charArr[i] >= 'A' && charArr[i]<= 'Z') counterArr[charArr[i]-'A']++; // 0-25

        else if(charArr[i] >= 'a' && charArr[i]<= 'z') counterArr[charArr[i]- 70]++; // 26-52

        else if(charArr[i] == ' ') counterArr[53]++; // 53
        
    }
    // printf("Here");
    find_max(counterArr);

    return 0; 
}