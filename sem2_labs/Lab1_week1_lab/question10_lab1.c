/*This Array will point at blank spots in the array and refill them using a pointer*/
//Charlie Casey Carney 
//27/01/26


#include <stdio.h>

#define SIZE 8

int main()
{
    //Declare variable 
    char chars[] = {'a', ' ', 'b', ' ', 'c',' ', ' ', 'd'};
    char *ptr;
    int i;

    ptr = &chars[0];
    
    // for loop to replace blank spaces
    for(i=0; i < SIZE; i++)
    {
        // if statement to replace blanks
        if(*(ptr + i) == ' ')
        {
            *(ptr + i) = '_';
        } //end if

        printf("%c\n", *(ptr + i));

    } //end for

    return 0;
}
