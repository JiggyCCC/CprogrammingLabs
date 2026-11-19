/*Thius code will intialize a 2-D array. It will declare a 3rd 3 x 4 array. Multiply each corresponding element in 1st and second
and put it in the 3rd array*/
// Charlie Casey Carney
// 18/11/25

#include <stdio.h>

#define ROW 3
#define COL 4

int main()
{
    // Intilaize variables / arrays
    int array1[ROW][COL] = {1, 2, 3, 4, 
                            5, 6, 7, 8,
                            9, 10, 11, 12
                            };
    
    int array2[ROW][COL] = {12, 11, 10, 9,
                            8, 7, 6, 5,
                            4, 3, 2, 1
                            };

    int array3[ROW][COL]; 
    int i, j;

    // For loop to multiply arrays
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j ++)
        {
            array3[i][j] = array1[i][j] * array2[i][j];
        } // end inner for
    } // end outer for

    // Give answers through the 3rd array
    printf("\nThe 2 arrays multiplied together is equal to:\n\n");

    for(i = 0; i < ROW; i ++)
    {
        for(j = 0; j < COL; j++)
        {
            printf("\nrow %d, col %d contains %d", i, j, array3[i][j]);
        } // end inner for
    } // end outer for

    return 0;

    
}