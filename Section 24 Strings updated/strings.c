#include <stdio.h>

int main()
{
    // this is a string with the '/0' in the back
    char name[] = "Gobind"; // this has a length of 7, 6 characters and 1 null. 
    // for(i = 0; i != '\0'; i++) 
    int i =0; 

    while(name[i] != '\0')
    {
        printf("%c", name[i]);
        i++;
    }
    return 0; 
}