#include <stdio.h>

// Our goal is to write a program that checks if the array is sorted or not. 

// Ex: {1,2,5,7,10} --> Perfectly Sorted
// Ex: {1,2,2,3,5,10} --> Partially Sorted
// Ex: {1,5,2,7,10} --> Not Sorted
# define SIZE 5

void sorted(){
    int i = 0, j = 1;
    int g = 0, y = 0, r = 0;
    int k = 0;

    int lst[SIZE]; // = {1,2,5,4,10};

    for (k = 0; k <= SIZE -1; k++){
        printf("Enter element number : ");
        scanf("%d", &lst[k]);
    }

    while (j < SIZE){

        if (lst[i] > lst[j]){
            r += 1;
            break;
        }

        if(lst[j] > lst[i]){
            g += 1;
        }
        i += 1;
        j += 1;
    }

    if (r >= 1){
        printf("Not Sorted\n");
    }
    else if (g == SIZE -1){
        printf("Sorted");
    }
    else{
        printf("Partially Sorted");
    }

}


int main(){
    sorted();

    return 0;
}