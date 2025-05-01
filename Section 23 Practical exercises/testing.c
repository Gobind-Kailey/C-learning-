#include <stdio.h>

#define ROW_SIZE 3
#define Column_SIZE 6
int main(){
    // int row, column;
    // // MacUILib_printf("********************");
    // for (row =0; row <= ROW_SIZE; row ++){
    //     if(row ==0 || row == ROW_SIZE){
    //         for (column = 0; column < Column_SIZE; column++){
    //             printf("*");
    //         }
            
    //     }
    //     else{
    //         for (column = 0; column < Column_SIZE; column++){
    //             if (column == 0 || column == (Column_SIZE -1)){
    //                 printf("*");
    //             }
    //             else{
    //                 printf(" ");
    //             }
    //         }
    //     }
    //     printf("\n");
    //         // else if(column == 0 || column == Column_SIZE -1){
    //         //     MacUILib_printf("*");
    //         // }
    // }

    enum FSMMode 
    {
    LEFT,
    RIGHT, 
    UP, 
    DOWN
    };
    enum FSMMode myFSMMode;

    struct objPos
    {   
    int x; // x-coordinate of an object
    int y; // y-coordinate of an object
    char symbol; // We will make this a $ sign
    };
    struct objPos player = {10 , 5,'$'};

    printf("%d", player.x );
}