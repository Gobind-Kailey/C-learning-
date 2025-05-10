#include <stdio.h>



// Use getchar
/*
Find the number of lines in this file 



*/

int main()
{   
    FILE* fp; 
    fp = fopen("C:/Users/gobin/OneDrive/Desktop/Personal Learning/Udemy C practice/Section 33 Files/exercise2.txt", "r"); 
    int count = 0; 

    
    if(fp!= NULL)
    {
        while(!feof(fp))
        {
            // fgetc(fp);
            printf("%c", fgetc(fp));
            // if(fgetc(fp) == "\n");
            count ++; 
            
        }
        fclose(fp);
    }
    printf("\nCount = %d", count); 
    return 0; 
}