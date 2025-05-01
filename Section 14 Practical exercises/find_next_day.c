#include <stdio.h>

// Check if its a leap year
// Check if its the last date of the month
// Check if its the last 
int main(){
    int year = 2000, month = 12, date = 31;
    int days, leap_year;

    // Checking if it is a leap year
    if (year %4 ==0){
        if (year % 100 == 0){
            if (year %400 == 0){
                leap_year = 1;
            }
            leap_year = 0;
        }
        leap_year = 1;
    }
    else
        leap_year = 0;
    // You could also do:
    // if (year %4 ==0 && (year %100 != 0 || year %400 == 0))
    // leap_year = 1
        

    // Determining how many days in a month
    switch (month)
    {
    case 1:
        days = 31;
        break;
    case 2:
        if (leap_year == 1){
            days = 29;
        }
        else{ 
            days = 28;
        }
        break;
    case 3:
        days = 31;
        break;
    case 4:
        days = 30;
        break;
    case 5:
        days = 31;
        break;
    case 6:
        days = 30;
        break;
    case 7:
        days = 31;
        break;
    case 8:
        days = 31;
        break;
    case 9:
        days = 30;
        break;
    case 10:
        days = 31;
        break;
    case 11:
        days = 30;
        break;
    case 12:
        days = 31;
        break;
    default:

        break;
    }

    if (date+1 > days){
        date = 0; 
        month += 1;
    }
    if (month > 12){
        year += 1;
        month = 1;
    }
    printf("The next day is: %d-%d-%d", date + 1, month, year); // Day month year

    /*
    // His method, and notice how you could write these cases together with one if statement
    date += 1;
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7: 
    case 8:
    case 10:
    case 12:
        if (date <=31)
        break;
    
    case 4:
    case 6:
    case 9:
    case 11:
        if (date <=30);
        break;

    case 2:
        if (date <= 29 && leap_year == 1)
            break;
        else if (day <= 28);
            break;
    default:
        date = 1;
        month += 1;
        if (month >= 12)
            year += 1;
            month = 1;
    */
    return 0;
}