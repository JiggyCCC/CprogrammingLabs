/*Finding average in array using functions*/
// Charlie Casey Carney 
// 17/02/26

#include <stdio.h>

#define SIZE 5

int fnx1(int*);

int main()
{
    int i;
    int array[SIZE];
    int average;

    printf("please enter 5 numbers:\n"); 

    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
    }//.end for

    average = fnx1(array);

    printf("the average is is %d:\n", average);

    return 0;
}

int fnx1(int *myarray)
{
    int i;
    int avg;
    int sum;

    for(i = 0; i < SIZE; i ++)
    {
        sum = sum + myarray[i];
        
    }//end for

    avg = sum / SIZE;

    return avg;
}