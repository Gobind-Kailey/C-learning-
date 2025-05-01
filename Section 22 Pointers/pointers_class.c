#include <stdio.h>


int main(){

    // R - values are the right side and their values are stored 
    // 
    // L values - left side and pointers can point to this not R tho bc its not stored in memory. 
    /*
    Address split 4 apart in example slides. 
    */

    // int n=3;
    // int* ptr_n = &n; // interger pointer, address holdering variable. 
    // // reference operater is address operator. 
    // printf("Variable n has value %d stored at address %p\n", n, &n);

    // printf("Address %p has value %d sotred in it\n", ptr_n, *ptr_n);
    // Seric is the defrefercing operator --> * -- Meaning go into the address and fetch value. 

    // 

    int n[3] = {101, 102, 103};
    // 0x makes it hexadecimal form. 
    printf("Array name has valueL 0x%p\n", n);
    // b[3] and b[-2] will still work, even if it is out of range. 
    // Value of pointer is address of the integer, if your pointing to a integer.  
    printf("First array element has value %d at address 0x%p \n", n[0], &n[0]);
    printf("second array element has value %d at address 0x%p \n", n[1], &n[1]);
    printf("Third array element has value %d at address 0x%p \n", n[2], &n[2]);




    return 0;
}