#include <stdio.h>


// Prints all unique elements in an array. 
// shoudl've used two pointers, it would've been alot eaiser. 
# define SIZE 10
int main(){

    int i, j;
    int lst[SIZE] = {5,7,3,4,5,6,8,9,10,3};
    int total, count =0, non_unique = 0;

    for (i= 0; i < SIZE; i++){
        for (j= 0; j< SIZE; j++){
            if (lst[i]== lst[j]){
                total += 1;
            }
        }
        if (total <= 1){
            count += 1;
            printf("%d\n", lst[i]);
        }
        total = 0;
    }
    non_unique = (SIZE - count)/2;
    printf("Number of non-unique elements = %d", non_unique);
    //printf("Number of unique elements = %d", count);
    return 0; 
}