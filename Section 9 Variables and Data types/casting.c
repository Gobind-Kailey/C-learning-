#include <stdio.h>

int main(){
    
    /*
    int num1 = 5, num2 = 2;
    double result;
    result = num1/(double)num2;
    
    printf("result = %.2lf", result);
    */

    /* Calculating your average grade
    int num1, num2, num3;
    double exact_grade;

    printf(" Num1 = ");
    scanf("%d", &num1);
    printf(" Num2 = ");
    scanf("%d", &num2);
    printf(" Num3 = ");
    scanf("%d", &num3);
    
    exact_grade = (num1 + num2 + (double)num3)/3;
    printf("Exact average = %.2lf", exact_grade);
    */

    // Weather station 

    /*
    double celsius_temp;
    double fahrenheit_temp;
    
    printf("Temperature in Celcius:");
    // Remember to use lf when working with double inputs. 
    scanf("%lf", &celsius_temp);

    fahrenheit_temp = (1.8*celsius_temp) + 32;

    printf("Celcius %.2lf || %.2lf Fahrenheit", celsius_temp, fahrenheit_temp);
    */

    // Swapping values of two values. 

    double num1 = 10.1, num2 = 5.9;
    double temp;
    printf("Orginally num1 = %lf and num2 = %lf\n", num1, num2);

    temp = num1; 
    num1 = num2;
    num2 = temp;

    printf("Finally num1 = %lf and num2 = %lf", num1, num2);

    return 0;

}