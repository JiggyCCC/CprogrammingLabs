/*This code will allow the user to input letters into an array and 
desplay them*/
// Charlie Casey Carney
// 07/11/25

#include <stdio.h>

#define SIZE 5

int main()
{
    int i;
    char array[SIZE];

    printf("Enter 5 letters into this array\n");

    for(i = 0; i < SIZE; i ++)
    {
        scanf(" %c", &array[i]);
    }

    printf("The letters you entered are:\n\n");

    for(i = 0; i < SIZE; i ++)
    {
        printf(" %c\n", array[i]);
    }

    return 0;
}