#include <stdio.h>

// Create a general program to calculate the average grade between them. 
// To incriment something by one use total++ as an example . 
int main(){

    int num_of_grades = 3, inputs = 0;
    // Dont forget to intiailze total value, otherwise it will always start at random value.
    float average, grades, total = 0;

    while (num_of_grades > 0){
        printf("\nEnter your grades: ");
        scanf("%f", &grades);
        total += grades;
        num_of_grades -= 1;
        inputs += 1;
    }
    average = ((float)total / inputs);
    printf("Your average is %.2f", average);  

    return 0;
}
