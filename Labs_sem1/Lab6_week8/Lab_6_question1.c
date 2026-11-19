/*This code will copy elements of an array into another array*/
// Charlie Casey Carney
// 4/11/25

#include <stdio.h>

#define SIZE 5

int main()
{
    int array1[SIZE];
    int array2[SIZE];
    int i = 0;
    int smallest;
    int largest;

    // user enters integers
    printf("enter 5 integers\n");

    // scans input into array
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &array1[i]);
    } // end for

    // puts array into second array
    for(i = 0; i < 5; i++)
    {
        array2[i] = array1[i];
    } //end for

    /*Prints first array*/
    printf("\n\nArray 1 is:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d\n", array1[i]);
    } // end for

    /*Prints second array*/
    printf("\n\narray 2 is the same:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d\n", array2[i]);
    } // end for

    return 0;
}