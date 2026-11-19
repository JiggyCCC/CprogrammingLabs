/*This code will read in my name and reprint it with spcases in between each one*/
// Charlie Casey Carney 
//24/02/26

#include <stdio.h>
#include <string.h>

#define SIZE 255

int main()
{
    // declar sting/array 
    char name[SIZE];
    char *ptr = name; 

    // get user to input name and read in
    printf("please enter your name:\n");
    fgets(name, SIZE, stdin);

    // for loop to pring spaces between characters
    for(int i = 0; name[i] != '\0'; i++)
    {
        putchar(name[i]);
        putchar(' ');
    } //end for
    return 0;
    
}