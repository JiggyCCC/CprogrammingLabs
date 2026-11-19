/*
Program Description: This program calculates the fibonacci series up to the Nth term at a maximum of 15terms and displays it out to the user.

Author: Luca Fennell Lawless

date:25/11/2025

*/

#include <stdio.h>

#define Terms 15

int main()
{
    int array[Terms] = {0,1};
    int i;
    int numterms = 0;
    int num = 0;
   
   
        printf("enter your selection:\n 1.Enter your selection of terms to calculate the sequence and display.\n 2.End the program.\n");
        scanf("%d", &num);
       
        if (num == 2)
        {
            printf(" You have ended the program\n");
        }

        else if (num == 1)
        {
       
            //reading input from user
            printf("enter a whole number between 1 and 15 for the amount of terms you would like: \n");
            scanf ("%d" , &numterms);
   

            //calcutling the fibonacci series
            for(i = 0; i < numterms; i++)
            {
                array[i + 2] = array[i] + array[i + 1];
            }

            //displaying series out to the user
            for(i = 0; i < numterms; i++)
                {
                    printf("%d\n" , array[i]);
                }
        }
       

        return 0;
    }