#include <stdio.h>

#define SIZE 8  

int find_max(int *couterArr)
{
    int i;
    int max = couterArr[0]; 
    // printf("Max = %d", max);
    // 0-9
    for(i = 0; i < 26; i++)
    {
        if(couterArr[i] > max)
            max = i;
        // printf("%c\n", couterArr[i]);
    }
    printf("Max= %c\n", max + 96);
    printf("Number of apperences: %d", couterArr[max]);
}


int main()
{
    char charArr[SIZE] = {'k', 'a', 'b', 'r', 'c', 'k', 'z', 'm'};

    int counterArr[26] = {0};
    int i; 
    for (i= 0; i < SIZE; i++)
    {
        // printf("Here");
        // printf("%d\n", charArr[i]); //96 - 122
        counterArr[charArr[i]-'a']++; 
        // printf("Here1");
        
    }
    // printf("Here");
    find_max(counterArr);

    return 0; 
}