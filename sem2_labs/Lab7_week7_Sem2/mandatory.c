/*Gets string from user, compares it, and finds if substring "is" occurs*/
// Charlie Casey Carney 
//10/3/26

#include <stdio.h>
#include <string.h>

#define SIZE 300

//functiuons
void comp(char[]);
void is(char[]);

// main function 
int main()
{
    // declare variables
    char string1[SIZE];

    printf("please enter a string:\n");
    fgets(string1, SIZE, stdin); // gets string into input

    string1[strlen(string1) - 1] = '\0'; // removes null space characters

    comp(string1); // call comp 

    is(string1);
}

// calling comp 
void comp(char string2[])
{
    char sttemp[SIZE] = "Hello World"; // comparison string
    int result; // allows us to see if they are similar or not

    result = strcmp(string2, sttemp); //puts comparison into result

    // If to say if they match 
    if(result == 0)
    {
        printf("Strings are identical\n");

    } // end if
    else
    {
        printf("Strings do not match\n");
    } // end else
}

// call function to see if 
void is(char strings[])
{

    int sublenght;
    int count = 0;
    char *string2 = " is "; // string for is
    sublenght = strlen(string2); // string lenght for sublenght

    char *str = strings;

    //checks if string has a greater lenght than 0 to start loop and makes sure the lenght is 2
    if(sublenght)
    {
        
        // searches for the appearance of is 
        while ((str = strstr(str, string2)))
        {
            str += sublenght -1; // this will move the pointer foward in the sting
            count++;
        } //end while
    }// end if

    printf("%d\n", count); //print number of iswth

}