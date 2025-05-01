#include <stdio.h>

// void elements(int *array, int size){
    
// }

void empty(int *array, int size){
    int i, j; 
    for (i = 0; i< size; i ++){
        array[i] = 0;
    }
    for (j = 0; j < size; j++){
        printf("%d ", array[j]);
    }
}

int main(){
    int array[3] = {1,4,3};
    empty(array, 3);
    // elements(array, 3);
    


    return 0;
}