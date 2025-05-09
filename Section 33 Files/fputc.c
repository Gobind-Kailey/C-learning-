#include <stdio.h>

/*

fputc(' ', <filename>) - This will take the filename and 

putchar('a', stdout) == putchar('a') - Takes a character and prints it to the screen

*/

int main()
{
    FILE *fp;


    fp = fopen("C:/Users/gobin/OneDrive/Desktop/Personal Learning/Udemy C practice/Section 33 Files/myFirstFile2.txt", "w");

    if (fp != NULL) // File was successfully opened 
    {
        fputc('H', fp);
        fputc('e', fp);
        fputc('y', fp);


        fclose(fp); 
    }


    return 0; 
}