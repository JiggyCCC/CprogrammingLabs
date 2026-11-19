/*This code will declare an array with 5 elements and ask the user to input 5 integers. it will then
copy the values into another array and desplay them in revers order*/
// Charlie Casey Carney
// 4/11/25

#include <stdio.h>

#define SIZE 5

int main()
{
    int original_array[SIZE];
    int reverse_array[SIZE];
    int i = 0;

    // read in integers
    printf("enter 5 integers that will be stored in an array\n");

    // scan integers into array
    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &original_array[i]);
    } // end for loop

    //reverse the array
    for(i = 0; i < SIZE; i++ )
    {
        reverse_array[i] = original_array[(SIZE - 1) - i];
    } // end for

    // print original array
    for(i = 0; i < SIZE; i++)
    {
        printf("\noriginal array is: %d\n", original_array[i]);
    } //end for

    // print the reverse array
    for(i = 0; i < SIZE; i++)
    {
        printf("\nreverse array is: %d\n", reverse_array[i]);
    } // end for

    return 0;
}
