#include <stdio.h>



int char_to_digit(char char1, char char2, char char3){
    int number = 0, num;

    // Check if it is within the number range.
    if (char1 >= 48 && char1 <= 57){
        number += (char1 - 48)*100;
    }
    else
        return 0;
    // printf("number = %d \n", number - 48);
    // num+= ("%d", number - 48);

    if (char2 >= 48 && char2 <= 57){
        number += (char2 - 48)*10;

    }
    else
        return 0;
    // printf("number = %d \n", number - 48);
    // num+= ("%d", number - 48);

    if (char3 >= 48 && char3 <= 57){
        number += (char3 - 48);
    }
    else
        return 0;
    // printf("number = %d \n", number - 48);
    // num+= ("%d", number - 48);

    return number;
}

int main(){
    char char1 = '5', char2 = '4' , char3 = '7';
    printf("Final number = %d", char_to_digit(char1, char2, char3));
    // For 3 iterations, I will pass through a value and convert it into a integer
    // scanf("%c%c%c", char1, char2, char3);


    return 0;
}