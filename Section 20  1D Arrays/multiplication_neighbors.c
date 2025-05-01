#include <stdio.h>

// A good neighbor is when the neighbors of a value in an array = value itself
// Ex: {1,3,2,6,3} --> This will print good neighbours because 2*3 = 6;
// Ex: {4,4,7,4,9} --> This will print not good neighbors because no neighbor multiplies. 

#define SIZE 5
// I dont know how to use pointers yet, so i will skip creating this fucntion for now. 
char* good_neighbour(){
    // char good = "Good Neighbour's", bad = "Bad Neighbor's";
    int array[SIZE] = {1,3,2,6,3};
    int i=0, k = 1, j = 2, z;
    for (z = 1; z<= SIZE; z++){
        if (j == SIZE){
            printf("Bad Neighbor's\n");
        }

        if (array[i]*array[j]== array[k]){
            printf("Good Neighbor's\n");
        }
        i +=1; k+=1; j+=1;
    }
    printf("Bad Neighbor's\n");
}


int main(){
    int good = 0;
    int array[SIZE] = {1,3,2,7,3};
    int i=0, k = 1, j = 2, z;
    for (z = 1; z<= SIZE; z++){

        // So we dont get an index error
        if (j == SIZE){
            //printf("Bad Neighbor's\n");
            break;
        }
        // Checking if it is a good neighbor. 
        if (array[i]*array[j]== array[k]){
            printf("Good Neighbor\n");
            good = 1;
            break;
        }
        i +=1; k+=1; j+=1;
    }
    
    if (good != 1){
        printf("Bad Neighbor\n");
    }
    // good_neighbour();
    //printf("They are %c ", good_neighbour());
        
    
    return 0;
}