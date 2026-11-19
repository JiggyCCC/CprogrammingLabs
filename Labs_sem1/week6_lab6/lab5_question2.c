/*This code will allow the user to input a number and if its even
it will half it, if its odd it will multiply by three and add 1*/
// Charlie Casey Carney
//21/10/25

#include <stdio.h>

int main()
{
    int num;
    int counter;

    // allow user to input number
    printf("enter a whole number\n");
    scanf("%d", &num);

    /* while loop to tell user what they cannot input*/
    while (num < 1)
    {
        printf("You cannot enter 1 or 0");
    } //end while

    // Step counter and finding odd and even
    while (num > 1)
    {
        if (num % 2 == 0)
        {
            num = num / 2;
            printf("\nthe next value is %d\n", num);
            counter = counter + 1;
        } // end if
        else 
        {
            num = num * 3 + 1;
            printf("\nnext value is %d\n", num);
            counter = counter + 1;
        } // end else
    } // end while

    printf("\nThe final value is %d\n", num);
    printf("\nsteps taken is equal to %d\n", counter);

    return 0;

}