#include <stdio.h>



 /*
Reading from a file 


*/

int main()
{   
    FILE* fp; 
    fp = fopen("C:/Users/gobin/OneDrive/Desktop/Personal Learning/Udemy C practice/Section 33 Files/exercise3.txt", "r"); 
    int i; 
    int num1, num2;
    if(fp!= NULL)
    {
    
        for(i = 1; i< 11; i++)
        {
            fscanf(fp, "%d%d", &num1, &num2); 
            printf("%d %d\n", num1, num2);
            // fgets(mynumbers,6, fp);
        }
            fclose(fp);
    }
    return 0; 
}
