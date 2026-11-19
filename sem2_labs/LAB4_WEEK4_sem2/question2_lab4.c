/*Finding highest number in array using functions*/
// Charlie Casey Carney 
// 17/02/26

#include <stdio.h>

#define SIZE 5

int fnx1(int*);

int main()
{
    int i;
    int array[SIZE];
    int highest;

    printf("please enter 5 numbers:\n"); 

    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
    }//.end for

    highest = fnx1(array);

    printf("the largest number is %d:\n", highest);

    return 0;
}

int fnx1(int *myarray)
{
    int i;
    int max = myarray[0];

    for(i = 0; i < SIZE; i ++)
    {
        if( myarray[i] > max)
        {
            max = myarray[i];
        }//end if
    }//end for

    return max;
}