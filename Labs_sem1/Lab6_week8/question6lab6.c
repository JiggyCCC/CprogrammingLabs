/*This code will allow the user to input 3 elements into an array
and display them from lowesr to highest*/
//Charlie Casey Carney
// 07/11/25

#include <stdio.h>

#define SIZE 3

int main()
{
    int array[SIZE];
    int i;
    int j;
    int temp;

    printf("enter 3 numbers into the array:\n");

    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
    }

    for(i = 0; i < 2; i ++)
    {
        for(j = i + 1; j < SIZE; j ++)
        {
            if(array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }// end if
        }// end inner for
    } //end outter for

    printf("The sorted array is:\n");

    for(i = 0; i < SIZE; i ++)
    {
        printf("%d\n", array[i]);
    }

    return 0;
}