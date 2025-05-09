#include <stdio.h>

/*
fgetc - File get character from an already opened file and read the first unread character
 
Note: The software behind our program is smart and keeps track of what was and wasn't read. 


fgetc(stdin) == getchar(); -- this just reads the character input from the user 

*/

int main()
{
    FILE *fp;

    char myChar1;

    fp = fopen("C:/Users/gobin/OneDrive/Desktop/Personal Learning/Udemy C practice/Section 33 Files/myFirstFile1.txt", "r");

    if (fp != NULL) // File was successfully opened 
    {
        printf("The file is opened for reading!\n");
        myChar1 = fgetc(fp); 
        printf("Output = %c \n", myChar1); // Will print first character of txt file. 
        fclose(fp); 
    }


    return 0; 
}