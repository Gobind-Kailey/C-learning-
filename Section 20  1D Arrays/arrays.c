#include <stdio.h>


int main(){
    // type name size , declaring the array below and then assigning it. 
    int i;
    int grades[5] = {5, 6, 5, 3, 54};

    int name[6] = {'G', 'o', 'b', 'i', 'n', 'd'};
    
    // printf("%c", name[0]);

    name[6] = 'H';
    //printf("%c", name[6]);

    // for (i = 0; i<= 4; i++){
    //     printf("Grade[%d] = %d\n",i, grades[i]);
    // }
    for (i = 0; i < 6; i++){
        printf("%c", name[i]);
    }
    return 0;
}