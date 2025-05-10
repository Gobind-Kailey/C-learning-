#include <stdio.h>

#define SIZE 5

int swap(int *val1, int *val2)
{
    int temp; 
    temp = *val1;
    *val1 = *val2;
    *val2 = temp; 

}

void swapArray(int *arr1, int *arr2)
{
    int i;
    for(i=0; i<SIZE; i++)
        swap(&arr1[i], &arr2[i]); 
}


int main()
{

    int Array1[SIZE] = {1, 3, 5, 8, 10};
    int Array2[SIZE] = {2, 2, 4, 11, 17};

    swapArray(&Array1, &Array2); 

    return 0; 
}
