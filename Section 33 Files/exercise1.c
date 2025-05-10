#include <stdio.h>



// Use getchar
/*
Find the number of charcters in this file 

*/

int main()
{   
    FILE* fp; 
    fp = fopen("C:/Users/gobin/OneDrive/Desktop/Personal Learning/Udemy C practice/Section 33 Files/exercise1.txt", "r"); 
    int count = 1; 
    if(fp!= NULL)
    {
        while(!feof(fp))
        {
            // printf("%c", fgetc(fp));
            if(fgetc(fp) == '\n')
                count ++; 
            
        }
        fclose(fp);
    }
    printf("\nCount = %d", count); 
    return 0; 
}