#include <stdio.h>


int main(){
    
    int days = 30, i;
    float total = 0.01;

    for (i = 1; i <= days; i++){

        total = total*2;
        printf("Day %d: Amount = %.2f\n", i, total);
    }

    printf("Final Totoal = %.2f", total);



    return 0;
}