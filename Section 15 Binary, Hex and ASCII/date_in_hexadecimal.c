#include <stdio.h>

// Recives year, month, date from user and then prints out the date in Dexadecimal Format. 
// Inputs are integers. 
int main(){
    int year = 2012, month = 8, day = 20;

    printf("Year in 0x = %X\n", year);
    printf("Month in 0x = %X\n", month);
    printf("Day in 0x = %X\n", day);


    return 0; 
}