/*This code will allow the user to input how many elements of the fibonacci sequence they want to sum up
it will store the calculated Fibonacci sequence in the n th term in the array and display until the nth
term. the prgram will always run until user stops it*/
//Charlie Casey Carney
//25/11/25

#include <stdio.h>

#define SIZE 16

int main()
{
    int fibonnacci_arr[SIZE];
    int i;
    int sum;
    int term_num;
    int tempnum;

    fibonnacci_arr[0] = 0;
    fibonnacci_arr[1] = 1;


    //calculating the sequence
    do
    {
        printf("\nEnter the number of terms to calculate in the sequence and display\n NOTE: NO MORE THAN 15 TERMS!\nEnter 0 to end the program\n");
        scanf("%d", &term_num);
        
        if(term_num == 0)
        {
            printf("\nprogramme ended.\n");
            break;
        } // end if
        else if(term_num > 15)
        {
            printf("\nenter a different a number less than or equal to 15\n");
        } // end else if
        else
        {

            for(i = 0; i < (term_num); i ++)
            {
                fibonnacci_arr[i + 2] = fibonnacci_arr[i] + fibonnacci_arr[i + 1];

            } //end for


            printf("\nthe fibonnacci sequence is:");

            for(i = 0; i < (term_num + 1); i ++)
            {
                printf("\n%d\n", fibonnacci_arr[i]);

            } //end for


            printf("\nThe total calculated is %d\n", fibonnacci_arr[15]);
        } //end else
        
    } while(term_num != 0); // end do 

    return 0;

}