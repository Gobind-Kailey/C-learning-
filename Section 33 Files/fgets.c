#include <stdio.h>

/*

fgets()

gets() -Gets the string from the use 



*/


int main()
{
    char myString[10];
    int count = 0;  
    FILE *fp; 

    fp = fopen("C:/Users/gobin/OneDrive/Desktop/Personal Learning/Udemy C practice/Section 33 Files/myFirstFile5.txt", "r");
    
    if(fp != NULL)
    {
        while(fgets(myString, 10, fp))
            printf("String #%d read: %s\n", ++count, myString);
        fclose(fp);
    }
    return 0; 
} 


