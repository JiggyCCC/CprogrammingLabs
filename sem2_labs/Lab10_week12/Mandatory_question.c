/*This code will change the file so it has numbers fpr each line*/
// Charlie Casey Carney
// 28/04/26


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define CHAR_COUNT 91

int main()
{

    // create file pointer and char for read in characters, index for incrementing 1 to add to lines
    FILE *fp;
    char count[CHAR_COUNT];
    int i = 1;

    fp = fopen("Textfile.txt", "r");

    // if statement to make sure file opens successfully 
    if(fp == NULL)
    {
        printf("file failed to open\n");

        return 0;

    }// end if
    else
    {
        while(fgets(count, CHAR_COUNT, fp))
        {
            printf("%d. %s", i++, count);
        } // end while

        fclose(fp);
    } // end else 
    
}


