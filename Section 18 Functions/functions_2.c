#include <stdio.h>

// Recieves 2 numbers
// print max and min 

void print_max_min(int num1, int num2){
    if(num1 < num2){
        printf(" max = %d", num2);
        printf(" min = %d", num1);
    }
    else{
        printf(" max = %d", num1);
        printf(" min = %d", num2);
    }
    
}

int main(){
    // Notice how you could pass through any variables but they will represent num1 and num2. 
    int a = 1, b =2;
    print_max_min(a, b);



    return 0;
}