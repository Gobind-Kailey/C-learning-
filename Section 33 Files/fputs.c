#include <stdio.h>

/*

fputs() - works the same way as puts() but it writes it to a file, but it doesn't include the \n 
*/


int main()
{

    FILE *fp; 

    fp = fopen("C:/Users/gobin/OneDrive/Desktop/Personal Learning/Udemy C practice/Section 33 Files/myFirstFile4.txt", "w");
    
    if(fp != NULL)
    {
        fputs("Hey man\n", fp);
        fputs("This is Gobind Kailey\n", fp); 
        fclose(fp);
    }
    return 0; 
}