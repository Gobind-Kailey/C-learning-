#include <stdio.h>

/*

fscanf() - Reads info from a file and stores it in variables 
*/

int main()
{
    FILE *fp;
    int num; 

    fp = fopen("C:/Users/gobin/OneDrive/Desktop/Personal Learning/Udemy C practice/Section 33 Files/myFirstFileScanf.txt", "r");

    if (fp != NULL) // File was successfully opened 
    {
        // fprintf(stdout, "%d", num); // printf("%d", num); 
        // fscanf(stdin, "%d", &num); // scanf("%d", &num); 
        fscanf(fp, "%d", &num);
        printf("Num = %d\n", num); 

        fclose(fp); 
    }



    return 0; 
}