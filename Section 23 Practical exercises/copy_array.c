#include <stdio.h>

// I will loop through the first array and place all elements into the second array. 

#define SIZE 3
int main(){
    // int date = 1, month = 2, year =2000;
    int date[SIZE]= {1,2,2000};
    int duplicate[SIZE]; 
    int i, j;

    // for (j=0; j<=2; j++){
    //     printf("Enter day, month and year: \n");
    //     scanf("%d", &array[i]);
    // }

    for (i=0; i<= 2; i++){
        duplicate[i] = date[i];
        printf("%d\n", duplicate[i]);
    }






    return 0;
}