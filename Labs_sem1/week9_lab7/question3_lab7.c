/*Entering 15 numbers and displaying them in a column and witha line and spaces*/
//Charlie Casey Carney
// 11/11/25

#include <stdio.h>

#define SIZE 5

int main()
{
    int arr[SIZE];
    int i;

    printf("Enter 15 numbers into this array\n");

    for(i = 0; i < SIZE; i ++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < SIZE; i ++)
    {
        printf("%d\n", arr[i]);
    }

    for(i = 0; i < SIZE; i ++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n\n");

    for(i = SIZE - 1; i >= 0; i --)
    {
        printf("%d \n", arr[i]);
    }

    return 0;
}