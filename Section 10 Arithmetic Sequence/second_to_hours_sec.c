#include <stdio.h>
#include <math.h>

// Write a program that foils downt the time. 
// 1 hour = 3600 seconds, 1 min = 60 seconds
int main(){
    int seconds;
    int hours, minutes, remianing_seconds;

    scanf("%d", &seconds);

    hours = seconds/3600;
    printf("Hours = %d\n", hours);

    minutes = (seconds%3600)/60;
    printf("%d\n", minutes);

    remianing_seconds = (seconds%3600)%60;
    printf("Time = %d:%d:%d",hours, minutes, remianing_seconds);








    return 0;
}