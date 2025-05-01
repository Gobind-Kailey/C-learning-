# include <stdio.h>

int main(){
    int price, total = 0;

    // You are doing the code first and then checking the condition, this is so
    // it will run atleast once before exiting. 

    do {
        printf("\nEnter The price: ");
        scanf("%d", &price);
        total += price;
    } while (price != 0);



    return 0;
}