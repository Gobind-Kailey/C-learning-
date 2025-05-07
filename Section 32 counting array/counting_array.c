#include <stdio.h>

#define SIZE 8  

int find_max(int *couterArr)
{
    int i;
    int max = couterArr[0]; 
    // 0-9
    for(i = 0; i < 5; i++)
    {
        if(couterArr[i] > max)
            max = i;
        printf("%d\n", couterArr[i]);
    }
    printf("Max = %d\n", max + 5);
    printf("Number of apperences: %d", couterArr[max]);
}


int main()
{
    // int arr[20] = {0, 5, 4, 9, 5, 8, 2, 3, 1, 5, 4, 8, 5, 5, 2 , 7, 6, 5, 4, 1};
    int arr[SIZE] = {7, 5, 6, 9, 6, 7, 10, 7};

    int counterArr[5] = {0};
    int i; 
    for (i= 0; i < SIZE; i++)
    {
        counterArr[arr[i]-5]++; 
    }

    find_max(counterArr);

    return 0; 
}