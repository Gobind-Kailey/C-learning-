#include <stdio.h>
// #include <stdlib.h> 


// Files 

int main()
{
    // Step #1
    //Creating a pointer that points to a FILE type 
    FILE* fp; 

    // Step #2 - Opening/access to a file 
    // fopen(<file name},<type_of_operation>)
    // If the name is not given it will create on wiht the name given
    // - w - Writing - Overwrites everything written in it already. 
    // - r - Reading
    // - a - Appending

    fp = fopen("C:/Users/gobin/OneDrive/Desktop/Personal Learning/Udemy C practice/Section 33 Files/myFirstFile.txt", "w");

    // Step #3 - Make sure the opening was successful 
    if (fp == NULL) // - to make sure that the open operation was successful 
        printf("The opening of the file was unsuccessful\n");
    else 
    {
        printf("The file is opened for wrting! \n"); 
        // You can write some code here 
        // Step #4 - wokr with the file (reading/writing/etc)
            // code for working with the file...

            // Step #5 - Close the file
        fclose(fp); 
        return 0; 
    }
}
    