/*This program will use pointer notation to write two floating point
arrays and copy the first array into the second array using pointers*/
// Charlie Casey Carney
// 2/12/25

#include <stdio.h>

#define SIZE 3

int main()
{
    // Declare variables and variables
    int i, j;
    float arr1[SIZE];
    float arr2[SIZE];

    // ask user to input numbers
    printf("enter 3 numbers into the first array\n");

    //scan the numbers into the array using pointers
    for(i = 0; i < SIZE; i ++)
    {
        scanf("%f", & *(arr1 + i));
    } // end for

    // put values into the second array using pointers
    for(i = 0; i < SIZE; i ++)
    {
       *(arr2 + i) = *(arr1 + i);
    } // end for

    // print the values in the second array
    printf("arr2 contains:\n");
    
    for(i = 0; i < SIZE; i ++)
    {
        printf("%.2f\n", *(arr2 + i));
    } // end for

    return 0;
}