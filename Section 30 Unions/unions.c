#include <stdio.h>


// Note that typedef is used the same exact way as it was in struct. 
// You can also create an array of unions, they can hold different values at each index.  

union Student
{
    int ID; 
    double average; 
};

int main()
{   
    union Student student1; 
    union Student *ptrStudent2;

    student1.ID = 5; 
    // ptrStudent2 = *student1; doesnt work 
    ptrStudent2 = &student1; 
    printf("ID = %d\n", ptrStudent2->ID);

    // printf("Size of student1 union = %d\n", sizeof(student1)); // 8
    // printf("Size of student2 union = %d\n", sizeof(ptrStudent2)); // 4 bc it is just the variable (not pointing yet)

    ptrStudent2->ID = 10;
    printf("ID = %d", student1.ID); // this will change , bc we changed value from that specific memory. 


    return 0; 
}