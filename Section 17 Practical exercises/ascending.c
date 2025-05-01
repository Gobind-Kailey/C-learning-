#include <stdio.h>
// #include <stdbool.h>

// Person inputs a values for how many numbers there are, then the user will input the next
// values, and our code will check if it is acending or not. 

int main(){

    int sequence_size = 3, i;
    int current_value, past_value = 0;
    int cont = 0;
    

    for (i= 1; i<= sequence_size; i++){
        printf("Insert value: ");
        scanf("%d", &current_value);

        printf("\n");

        if (current_value < past_value){
            printf("Not Ascending! ");
            cont = 1;
            break;
        }
        past_value = current_value;
    }    
    // printf("cont = %d", cont);
    if (cont == 0){
        printf("Asceding!");
    }

    return 0;
}