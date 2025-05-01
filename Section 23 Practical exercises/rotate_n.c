#include <stdio.h>

// The given array should be shifted to the left n positions . 
// This is a very bad method, you should instead take the code you wrote for one senerio, and 
// loop it through for N times. 
// Ex: 5,4,7,3 -- > 4,7,3,5 if n = 1
#define SIZE 4
#define N 4 
int main(){

    int i, j; 
    int lst[SIZE] = {5,4,7,3};
    int temp0 = lst[0];
    int temp1 = lst[1];
    int temp2 = lst[2];
    int temp3 = lst[3];
    int operation;

    
    for (i = 0; i < SIZE; i++){
        if (i + N >= SIZE){
            operation = (i + N) % SIZE;
            switch (operation)
            {
            case 0:
                lst[i] = temp0;
                break;
            case 1:
                lst[i] = temp1;
                break;
            case 2:
                lst[i] = temp2;
                break;
            case 3:
                lst[i] = temp3;
                break;
        }
        }
        else{
            lst[i] = lst[i+N];
        }
    }
    for (j = 0; j < SIZE; j++){
        printf("new list numbers = %d\n", lst[j]);
    }
    return 0;

}