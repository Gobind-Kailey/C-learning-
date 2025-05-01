#include <stdio.h>


int main(){
    int money= 86, grade = 94;

    if (grade >= 90 && money < 50){
        printf_s("The conditoin is True\n");
    }
    else{
        printf_s("The conditoin is False\n");
    }
    if (money < 50 || grade > 90){
        printf_s("True");
    }
    if(grade != 80){
        printf_s("lkfadsjlkasdj");
    }   
    
    return 0;
}