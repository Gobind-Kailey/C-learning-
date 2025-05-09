#include <stdio.h>

/*

fprintf() - Whatever we are printing to output, we would like to write it in the file. 
    - Also return the number of bytes it has written 
*/

int main()
{
    FILE *fp;
    int num; 

    fp = fopen("C:/Users/gobin/OneDrive/Desktop/Personal Learning/Udemy C practice/Section 33 Files/myFirstFile3.txt", "w");

    if (fp != NULL) // File was successfully opened 
    {
        fprintf(fp, "%d", num);
        fprintf(fp, "%d %d", num, num*num);

        fclose(fp); 
    }



    return 0; 
}