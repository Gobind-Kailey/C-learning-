#include <stdio.h>

// Write a program that gets the temperture from the user for 7 days
// It will print the average temperture, the hottet and coldest day of the week. 
// Problem: nothing goes lower than zero.

#define SIZE 7

int main(){

    int temperture[SIZE];
    int hottest = -5000, coldest = 5000;
    int i, sum = 0;
    float average; 
    int index_h, index_c;

    // Entering and adding inputs to the array. 
    for (i = 0; i<= SIZE -1; i++){
        printf("Enter the temperture of Day: %d: ", i + 1);
        printf("");
        scanf("%d", &temperture[i]);

        sum += temperture[i];

        // printf("temp[i] = %d \n", temperture[i]);
        // printf("Hottest = %d \n", hottest);
        // printf("Coldest = %d \n", coldest);
        
        // Checking for hotter temperture. 
        if (temperture[i] > hottest){
            hottest = temperture[i];
            index_h = i;
        }
        if (temperture[i] < coldest){
            // printf("coldest = %d", temperture[i]);
            coldest = temperture[i];
            index_c = i;
        }
    }
    
    average = (float)sum/SIZE;
    
    // Final results 
    printf("Average = %.2f\n", average);

    printf("Hottest index = %d \n", index_h);
    printf("Hottest = %d \n", hottest);

    printf("Coldest index = %d\n", temperture[index_c]);
    printf("Coldest = %d", index_c);


    return 0;
}