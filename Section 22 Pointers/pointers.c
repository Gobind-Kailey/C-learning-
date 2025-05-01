# include <stdio.h>

int main(){

    int a = 5;
    int *p = &a;

    // Accessing values 
    printf("%d\n", a);
    printf("%d\n", *p);

    // Accessing variables
    printf("%p\n",  &a);
    printf("%p",  p);

 
    return 0;
}