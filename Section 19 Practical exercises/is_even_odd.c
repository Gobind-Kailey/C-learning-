#include <stdio.h>

int is_even(int num){

    if(num %2 == 0){
        return 1;
    }
    return 0;
}


int main(){
    int num = 3; 

    printf("This value is = %d", is_even(num));

    return 0;
}