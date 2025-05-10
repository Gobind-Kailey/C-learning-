#include <stdio.h>

/*

Write a function that counts the appearances of each letter a-z and then prints the (first - tie) largest value




*/

int main()
{
    FILE* fp;
    fp = fopen("C:/Users/gobin/OneDrive/Desktop/Personal Learning/Udemy C practice/Section 33 Files/exercise6.txt", "r"); 
    int i, max = 0; 
    char character;
    int lettersArr[26] = {0}; 
    if (fp != NULL)
    {
        // puts("Enter a character to check the number of occurances of: ");
        // character = getchar();

        while(!feof(fp))
        {
            lettersArr[fgetc(fp) - 'a']++; 
        }
    }

    for(i = 0; i< 26; i++)
    {
        if(lettersArr[i] > max) max = lettersArr[i];
        printf("Letter = %c : %d\n", i+'a',lettersArr[i]);
    }

    printf("Max = %d", max);
    fclose(fp); 


    return 0; 
}