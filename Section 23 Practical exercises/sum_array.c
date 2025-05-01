#include <stdio.h>


int sum_array( int *pArr, int size);

int main(){

    int arr[3] = {1,3,10}; 
    int result;
    result = sum_array(arr, 3);
    printf("The results are = %d\n", result);

    return 0; 
}
// *pArr - holds address of array.  
int sum_array( int *pArr, int size)
{
    int i;
    int sum = 0;
    for (i = 0; i < size; i++){
        printf("%d\n",pArr[i]);// 1, 3, 10
        sum = sum + pArr[i];
    }
    return sum;
}


