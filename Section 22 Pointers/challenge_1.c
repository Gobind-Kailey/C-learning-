#include <stdio.h>


int main(){

    int grade1 = 5, grade2 = 4;
    int *p= &grade1, *j = &grade2;

    // print value and address of grade 1. 
    printf("%d\n", *p); // Dereferencing 
    printf("%p\n", &grade1);

    // print value and address of grade 2. 
    printf("%d\n", *j); // Dereferencing 
    printf("%p", &grade2);

    return 0;
}