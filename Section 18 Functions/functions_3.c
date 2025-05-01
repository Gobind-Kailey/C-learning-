#include <stdio.h>

int print_max_min(){
    int num1  = 8, num2 = 6, num3 = 3; 
    int max = num1, min = num2; 

    if (num2 > num1){
        max = num2;
        min = num1;
    }
    
    if (max < num3){
        max = num3;
    }
    else if (num3 < min){
        min = num3;
    }
    // printf("max = %d\n", max );
    // printf("min = %d",min  );

    // Allowing the next line to access the max variable. 
    return max;
    // return min; 

}
int main(){
    int maximum;
    maximum = print_max_min();
    printf("%d", maximum);

    return 0;
}