#include <stdio.h>


int main()
{
    FILE* fp;
    fp = fopen("C:/Users/gobin/OneDrive/Desktop/Personal Learning/Udemy C practice/Section 33 Files/exercise5.txt", "r"); 
    char character;
    int count = 0; 
    if (fp != NULL)
    {
        puts("Enter a character to check the number of occurances of: ");
        character = getchar();

        while(!feof(fp))
        {
            if(fgetc(fp) == character) count++; 
        }
    }

    printf("Count = %d", count);
    fclose(fp); 


    return 0; 
}