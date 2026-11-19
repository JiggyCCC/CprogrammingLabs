/*this code will remove any blank lines that are found in the file*/
// Charlie Casey Carney 
// 21/4/26

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHARS 91

int main()
{
    FILE *f1, *f2;
    char one_line[MAX_CHARS];
    char second_line[MAX_CHARS];
    float result = 1;

    if((f1 = fopen("singleLine.txt", "r"))== NULL || (f2 = fopen("Multiline.txt", "w"))== NULL)
    {
        printf("\nError opening File");
    } // end if

    while( fgets(one_line, MAX_CHARS, f1) != NULL)
    {
        result = strcmp(one_line, "\n");

        if( result != 0)
        {
            fputs(one_line, f2);
        }
    }
}