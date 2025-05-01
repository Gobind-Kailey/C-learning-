#include <stdio.h>

// Get access to each value of the number and then place it in a list. 
// Find the max value in the list. 

// int array(int number){
//     int i = 9,j, index =0 ;
//     int num_array[i + 1];
//     while (number > 0){
//         num_array[i] = number %10; 
//         number = number / 10;
//         i -= 1;
//     }
//     // not sure why the indexing starts from 1 and not zero. 
    
//     int lowest_value = num_array[1];
//     // printf("Lowest = %d\n", lowest_value);
//     for (j = 1; j<=9; j++){ 
//         printf("%d", num_array[j]);
//         if (num_array[j] < lowest_value){
//             lowest_value = num_array[j];
//         }
//     }
//     return lowest_value;

// }

// This makes size a constant value, rather than a int variable. 
# define SIZE 7
int main(){

    // int number = 647509297;
    // printf("Lowest value = %d", array(number));


    int arr[SIZE];
    int i, maxindex = 0;

    for(i = 0; i<SIZE; i++){
        printf("Enter digit number %d: ", i + 1 );
        scanf("%d", &arr[i]);
        
        if (arr[i] > arr[maxindex]){
            maxindex = i;
        }
    }
    printf("Max index = %d", maxindex);
    return 0;
}