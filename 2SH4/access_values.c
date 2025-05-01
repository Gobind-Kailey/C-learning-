#include <stdio.h>

 int main(){
    int i; 
    int *p;
    int a[] = {2,4,6,8,9};

    for(i = 0; i < 5; i++){
        printf("Enter a number");
        scanf("%d", &a[i]); // you do require the the &/ 
    } 

    for(i =0; i < 5; i++){
        printf("%d", a[i]);
    }
    return 0; 
 }