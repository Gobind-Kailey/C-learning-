#include <stdio.h>

int main(){
    int num = -387;

    if (num<1)
        num = num*-1;

    printf("%d", num);

    return 0;
}