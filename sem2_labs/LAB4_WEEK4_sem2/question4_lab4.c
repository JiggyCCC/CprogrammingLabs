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

    fnx1(array);

    for(i = 0; i < SIZE; i ++)
    {
        printf("%d\n", array[i]);
    }

    

    return 0;
}

int fnx1(int *myarray)
{
    int i;

    for(i = 0; i < SIZE; i ++)
    {
        myarray[i] = myarray[i] * 2;
    }//end for

    return *myarray;
}