#include <stdio.h>
#include <stdlib.h>

# define SIZE 4
int main(){
    int lst[SIZE] = {-4, 2, 3, -6};
    int i = 0, j = 1, k = 1;
    int sum, closest= 5000; 

    while (k < SIZE){

        sum = lst[i] + lst[j]; 

        if (lst[i] + lst[j]== 0){
            closest = lst[i] + lst[j];
            break; 
        }
        else if (abs(sum) < closest){
            closest = abs(sum);
            // printf("closest = %d\n", closest);
        } 
        j += 1;

        if (j >= SIZE - 1){
            k += 1;
            i += 1;
            j = k;
        }
        
    }
    printf("Closet value = %d", closest);
    return 0;
}