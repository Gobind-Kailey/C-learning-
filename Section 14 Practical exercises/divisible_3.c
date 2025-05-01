 #include <stdio.h>


 int main(){

    int num1 = 5, num2 = 10, num3 = 0;
    int min;

    min = (num1 < num2)? num1:num2;
    min = (min < num3)? min:num3;

    // printf("%d", min);
    if (num1 == 0 || num2 ==0 || num3 == 0)
        printf("Not-Divisible 0 division");
        return 0;
    if (num1%min == 0 && num2%min == 0 && num3%min == 0)
        printf("Divisible");
    else
        printf("Not-Divisible");

    return 0;
 }