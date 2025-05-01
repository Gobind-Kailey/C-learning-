#include <stdio.h>



// average calulator
float average(int num, int digit){
    int total = 0, count =0;
    while (num > 0){
        // printf("%d\n", num);
        if (num%10 < digit){
            total += num%10;
            count += 1;
            num = num / 10;
            // printf("%d", num);
        }
        else{
            num = num / 10;
            continue;
        }
    }
    return (float)total/count;
}


int main(){
    int num = 12426, digit = 5;

    printf("Average = %.2f", average(num, digit));


    return 0;
}