/*This code will ask the user to inout a 5 numbers and count the even numbers using a function */
//Charlie Casey Carney 
// 17/02/26

#include <stdio.h>

#define SIZE 5

int array_even(int[]);

int main()
{

    // Declare variables and array
    int i;
    int array[SIZE];
    int even_nums;

    // ask the user to input numbers
    printf("please enter 5 numbers into this array:\n");

    // read these numbers into the array 
    for(i = 0; i < SIZE; i ++)
    {
        scanf("%d", &array[i]);
    }// end for

    // Using pass by value for array and to return counted even numbers
    even_nums = array_even(array);

    // Print the total amount of even numbers counted in the array
    printf("the total number of even numbers you entered is %d\n", even_nums);

    return 0;
}

// function to calculate odd and even numbers
int array_even(int myarray[])
{
    // declare i for loop
    int i;
    int counter = 0;

    // for loop to calculate odd and even numbers
    for(i = 0; i < SIZE; i ++)
    {
        // if statement to calculate odd and even numbers and prints them 
        if(myarray[i] % 2 == 0)
        {
            // prints if number is even and counts the even 
            printf("\n%d is an even number\n", myarray[i]);
            counter = counter + 1;
        } // end if
        else
        {
            // prints wether a number is odd
            printf("\n %d is an odd number\n", myarray[i]);
        }// end else
    } // end for

    return counter;

}