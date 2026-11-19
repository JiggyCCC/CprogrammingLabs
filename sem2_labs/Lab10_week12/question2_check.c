/*this code will compare the latency of fgetc and fgets*/
// Charlie Casey Carney 
// 26/4/26

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_CHAR 500

int main()
{
    FILE *f1;
    FILE *f2;

    char file1[MAX_CHAR];
    char file2[MAX_CHAR];

    float result;

    if((f1 = fopen("fgetc.txt", "r"))==NULL || (f2 = fopen("fgets.txt", "r"))==NULL)
    {
        printf("\nError opening file\n");
    }//end if
    else
    {
        while
    }





}