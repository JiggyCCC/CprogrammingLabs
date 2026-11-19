/*THis code will compare a single line txt file and a multiline txt file and tell you if they are different or not*/
// Charlie Casey Carney
// 21/4/26

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHARS 81

int main()
{
    // Create pointers to point at the files you waant to open 
    FILE *f1;
    FILE *f2;

    // Create two strings to read in both files and other variables needed
    char one_line[MAX_CHARS];
    char second_line[MAX_CHARS];
    float result = 1;
    int identical =1;

    // Check if files have been opened successfully
    if((f1 = fopen("singleLine.txt", "r"))== NULL || (f2 = fopen("Multiline.txt", "r"))== NULL)
    {
        printf("\nError opening File");
    } // end if
    // while loop that runs through both txt files while both do not return null 
    else
    {

        while( fgets(one_line, MAX_CHARS, f1) != NULL && fgets(second_line, MAX_CHARS, f2) != NULL)
        {
            // compare files 
            result = strcmp(one_line, second_line);
            printf("%s\n", one_line);
            printf("%s\n", second_line);

            // print if files are different or not
            if(result != 0)
            {
                printf("your files are the different\n");
                identical = 0;
            } // end if
           
        } // end while

        fclose(f1);
        fclose(f2);

    } // end else

    // tell user the exact outcome of what is in the files
    if(identical == 1)
    {
        printf("the files are identical\n");
    } //end if 


    return 0;
}