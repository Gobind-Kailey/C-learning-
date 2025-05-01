#include <stdio.h>


int main(){

    int arr[] = {2,4,6,8,9};
    int *p = arr; 

    printf("%d\n", arr[4]); // 9
    printf("%d\n", p[4] ); // 9
    printf("%d", *(p + 3));// 8
    

    return 0; 
}