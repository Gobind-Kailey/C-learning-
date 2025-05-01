#include <stdio.h>

int main(){

    int var = 3; 
    int *ptr = &var;

    *ptr *= 10; // var *= 10 esstically this mean that *ptr = var
    printf("%d\n", *ptr);

    printf("pointer address = 0x%p\n", var); // 0x00000003
    printf("pointer address = 0x%p\n", &var); // 0x0061FF18
    printf("pointer address = 0x%p\n", *&var); // 0x00000003
    printf("pointer address = %d\n", *&var); // 3

    // Working with ptr
    printf("pointer address = 0x%p\n", ptr); // 0x0061FF18
    printf("pointer address = 0x%p\n", *ptr); // 0x00000003
    printf("pointer address = %d\n", *ptr); // 3

    

    


    return 0;
}