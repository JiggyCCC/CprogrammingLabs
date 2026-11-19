/*This code will enter values of a 2-D array, 
calculate the sum of row 0, Row 1 and Row 2 separately
calculate sum of col 0 and col 1
and find the highest number in the array and display it*/
// Charlie Casey Carney
// 18/11/25

#include <stdio.h>

#define ROW 3
#define COL 2

int main()
{
    // Declare variables and array
    int array1[ROW][COL];
    int i, j;
    int sum;
    int high;

        // allow user to input numbers
    printf("enter %d numbers into the array\n", ROW*COL);

    for(i = 0; i < ROW; i ++)
    {
        for(j = 0; j < COL; j++)
        {
            scanf("%d", &array1[i][j]);
        } // end inner 4
    } // end outer 4

    high = array1[0][0];

    for(i = 0; i < ROW; i ++)
    {
        for(j = 0; j < COL; j++)
        {
            if(high < array1[i][j])
            {
                high = array1[i][j];
            } // end if
        } // end inner for
    } // end outer 4 

    // print the highest number
    printf("\nthe highest number in the array is %d\n", high);

    //calculate the sum of rows separately
    for(i = 0; i < ROW; i ++)
    {
        sum = 0;

        for(j = 0; j < COL; j++)
        {
            sum = sum + array1[i][j];
            
        } // end inner for

        printf("\nThe sum of row %d is %d", (i + 1), sum);
    } // end outer for

    printf("\n\n");

    // calculate the cols separately
     for(j = 0; j < COL; j ++)
    {
        sum = 0;

        for(i = 0; i < ROW; i++)
        {
            sum = sum + array1[i][j];
            
        } // end inner for

        printf("\nThe sum of COL %d is %d\n", (j + 1), sum);
    } // end outer for

    return 0;
}