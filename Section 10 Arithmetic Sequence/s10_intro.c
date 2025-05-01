#include <stdio.h>
#include <math.h>

int main(){

    // Write a program that calculate and prints An. Finds the n-th term of the sequence. 
    // n-th Term = an = a1 + (n-1)*d
    
    /*
    float a1, d;
    int n;
    float an;

    printf("Enter a1 =");
    scanf("%f", &a1);

    printf("Enter d =");
    scanf("%f", &d);

    printf("Enter n =");
    scanf("%d", &n);

    an = a1 + (n-1)*d;

    printf("The n-term is= %.2f", an);
    */

    // Sum of Arihmetic Sequence Sn
    // (a1 + an)* n/2 

    /*
    float a1, d, an, sn;
    int n;

    printf("Enter a1 =");
    scanf("%f", &a1);

    printf("Enter d =");
    scanf("%f", &d);

    printf("Enter n =");
    scanf("%d", &n);

    an = a1 + (n-1)*d;
    printf("The n-term is= %.2f\n", an);

    printf("(%f + %f)*(%d/2)\n", a1, an, n );

    sn = (a1 + an)* n/2;
    printf("The sum of the Sequence is %.2f", sn);
    */
    
    // Employee Salary Calculator
    // n = number of hours worked that week, pay = salary per hour. 
    
    /*
    int n;
    float pay,salary_per_month;

    printf("How many hours did you work in a week?");
    scanf("%d", &n);
    printf("What is your income per hour?");
    scanf("%f", &pay);

    salary_per_month = n*4*pay;
    
    printf("Your salary is: %.2f", salary_per_month);
    */

    // Finding a driving time. 
    // d =  distance from point A to B, s = speed of the vehicle
    
    float distance = 300, speed = 80, time_hrs, time_min, time_sec;

    // printf("What is the distance from point A to B?");
    // scanf("%f", &distance);
    // printf("What was your speed in km/hr?");
    // scanf("%f", &speed);
 
    time_hrs = floor(distance/speed);
    time_min = (distance/ speed) * 60;
    time_min = (int)time_min % 60;
    time_sec = (distance/speed) *360;

    printf("It took you %.2f hrs\n", time_hrs);
    printf("It took you %.2f min\n", time_min);
    printf("It took you %2.f sec\n", time_sec);


    return 0;
}