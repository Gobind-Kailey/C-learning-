#include <stdio.h>

int main(){
    /*
    int grade1;
    int grade2;
    
    scanf("%d", &grade1);
    scanf("%d", &grade2);

    printf("Average = %d", (grade1 + grade2)/2);
    */

    // getting user input: 

    /*
    int num;
    scanf("%d", &num);
    //num = 10;
    printf("%d",num);
    */

    // Calculating what year a person was born:

    /*
    int current_year;
    int current_age;

    scanf("%d", &current_year);
    scanf("%d", &current_age);

    printf("The year you were born was: %d", current_year - current_age);
    */
    
    // Calculating area of rectangle

    /*
    double height, width, area;
    printf("Enter height: ");
    scanf("%lf", &height);
    printf("Enter width: ");
    scanf("%lf", &width);

    area = height * width;

    printf("Area = %.2lf", area);
    */ 
    double height, width, perimeter;
    printf("Enter height: ");
    scanf("%lf", &height);
    printf("Enter width: ");
    scanf("%lf", &width);

    perimeter = 2*height + 2*width;
    printf("Perimeter = %.2lf", perimeter);


    return 0;
}