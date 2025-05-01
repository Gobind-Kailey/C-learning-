#include <stdio.h>

// strcpy(char *strDestination, char *strSrc)

// Make sure you have enough space to store the new copied string. 
char *strcpy(char *strDestination, char *strSrc)
{
    int i = 0; 
    while(strSrc[i] != '\0')
    {
        strDestination[i] = strSrc[i];
        i++;
    }
    strDestination[i] = '\0';
    return strDestination; 
}

int main()
{
    char name[] = "Gobind";
    char copy_of_name[30]; 
    char *tempResult;
    tempResult = strcpy(copy_of_name, name); 
    printf("The new copied string is: %s", tempResult);
    return 0; 
}