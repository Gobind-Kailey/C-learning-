#include <stdio.h>
#include <string.h>
/*
Are useful for memory map registers 

- User-Defined Datatype
- Allows you to store different data types in teh same memory location. 
- Bc all of them share the same memory, only one if its membesr can be held at a time. 

*/

/*

union <union_name>
{
    // datatype1 field1; 
    // datatype2 field2; 
};
*/


// union minMax
// {
//     int min; 
//     int max; 
//     double average; 
// };

union info
{
    char firstName[20];
    int age; 
};

union point_union
{
    int x;
    int y;
};

int main()
{
    // Template
    // union <union_name> <variable_name>
    union info myVariable1; 
    // myVariable1.age = 20;
    // printf("age = %d", myVariable1.age);
    // strcpy(myVariable1.firstName, "Hello");
    // printf("First name: %s", myVariable1.firstName);
    union point_union number;
    number.y = 3; 
    // both x and y will output 3
    printf("Union Point = (%d, %d) \n", number.x, number.y);

    number.x = 15;

    printf("Union Point after change = (%d, %d) \n", number.x, number.y);


    return 0; 
}