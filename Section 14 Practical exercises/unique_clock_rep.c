#include <stdio.h>

int main(){
    int sec = 4000;
    int hours, minutes, remaining_seconds;

    hours = sec/3600;
    minutes = (sec%3600)/60;
    remaining_seconds = (sec%60);

    if (hours >0 && hours <10)
        printf("0");
    printf("%d:", hours);

    if (minutes >0 && minutes <10)
      printf("0");
    printf("%d:", minutes);

    if (remaining_seconds >0 && remaining_seconds <10)
        printf("0");
    printf("%d", remaining_seconds);
    
    return 0;
}