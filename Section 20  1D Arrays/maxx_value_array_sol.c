#include <stdio.h>


int main(){

    int arr[] = {1,4,3,4,5,9,0};
    int i, max;

    max = arr[0]; 

    // we didnt include i =0 bc we already assumed it to be the lowest above. 
    for(i =1; i<7; i++)
    {
        if (arr[i] > max){
            max = arr[i];
        }
    }
    printf("Max digit is %d", max);
    return 0;
}