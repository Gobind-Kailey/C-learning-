#include <stdio.h>
#include <string.h>

/*

At every even postion we want to make sure the value = even number
At every odd postion value = odd number 

If both of the above statements are true, then we will return 1, otherwise 0; 


Need to look at the string in reverse as all the index values are flipped. 
--> we would need to find the length of the string and then start from the end of it. 

Then compare the index and value to check if even or not. 

*/
// Assuming number inputted has atleast 1 digit 
int len(int user_input, int counter)
{
    if(user_input/10 > 1) 
    {
        counter++;
        return len(user_input/10, counter);
    }
    else return counter; 
}


int correct_position(int user_input, int i, int length)
{
    if(i == (len(length, 0))) return 1;  
    if((user_input%10) %2 != i%2) return 0 + correct_position(user_input/10, i--, length);
    // if(user_input %2 == i%2) return 1;
    return correct_position(user_input/10, i++, length);

}


int main()
{
    int user_input; 
    int counter =0; 
    int i = 0; 
    puts("Enter a number:");
    scanf("%d", &user_input);
    int length = len(user_input, counter);
    // printf("Counts up to: %d\n", length); 
    int outcome = correct_position(user_input, i, length + 1);
    printf("Outcome = %d", outcome); 

    return 0; 
}