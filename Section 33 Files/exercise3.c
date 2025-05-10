#include <stdio.h>



/*

Write powers from 1-10 and save them in a file. 



*/

int main()
{   
    FILE* fp; 
    fp = fopen("C:/Users/gobin/OneDrive/Desktop/Personal Learning/Udemy C practice/Section 33 Files/exercise3.txt", "w"); 
    int i; 
    
    if(fp!= NULL)
    {
    
        for(i = 1; i< 11; i++)
            fprintf(fp, "%d %d\n", i, i*i );
        fclose(fp);
    }
    return 0; 
}
