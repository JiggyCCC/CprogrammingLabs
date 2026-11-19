/*This code will use a 3 x 2 array. You will enter the values
it will display, it will find the smallest and largest value, and calculate the average*/
// Charlie Casey Carney
// 11/11/25

#include <stdio.h>

#define ROW 3
#define COL 2

int main()
{
    // Declare Variables
    int array1[ROW][COL];
    int i, j;
    float average; 
    int largest;
    int smallest;
    int sum = 0;

    //ask the user to input
    printf("enter %d integers into this 3 x 2, 2-D array\n", ROW*COL);

    // scan in the values entered
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            scanf("%d", &array1[i][j]);

            sum = sum + array1[i][j];

        } // end inner for
    } // end outter for

    // print the values entered
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            printf("Row %d, col%d contains %d\n", i, j, array1[i][j]);
        } //end inner for
    } // end outter for

    // intialize largest and smallest to 0
    largest = array1[0][0];
    smallest = array1[0][0];

    // Find the largest and loweest values
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            if(largest < array1[i][j])
            {
                largest = array1[i][j];
            } // end if
            if(smallest > array1[i][j])
            {
                smallest = array1[i][j];
            } // end if
        } // end inner for
       
    } // end outer for

    //print the largest and smallest values
    printf("\nthe largest value is %d\n", largest);
    printf("\nthe smallest value is %d\n", smallest);

    //find the average
    average = (float)sum / (ROW*COL);

     //Print the average
    printf("the average is %.2f\n", average);

    return 0;
}