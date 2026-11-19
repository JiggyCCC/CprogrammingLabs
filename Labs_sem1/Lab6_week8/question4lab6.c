/*Define an integer array with 4 elements. Write a program that will allow the user to
enter 4 numbers into this array and do the following*/
//Charlie Casey Carney
// 07/11/25

#include <stdio.h>

#define SIZE 4

int main()
{
    int num[SIZE];
    int i;

    printf("enter four elements into the array\n");

    for(i = 0; i < SIZE; i ++)
    {
        scanf("%d", &num[i]);
    }

    printf("The array you entered is:\n");

    for(i = 0; i < SIZE; i ++)
    {
        printf("%d\n", num[i]);
    }

    int temp;

    temp = num[0];
    num[0] = num[1];
    num[1] = temp;

    temp = num[2];
    num[2] = num[3];
    num[3] = temp;

    printf("the new array is:\n");

    for(i = 0; i < SIZE; i ++)
    {
        printf("%d\n", num[i]);
    }

    return 0;
}