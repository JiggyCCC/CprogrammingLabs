/*this code will find if a number is odd or even when passing it through a function*/
//Charlie casey carney 
// 10/02/26

#include <stdio.h>

//Function to find even or odd
void fnx1(int);

int main()
{
    //declare varibales
    int num;
    
    //allow user to enter a integer
    printf("\nenter a number to see if its even or odd\n");
    scanf("%d", &num);

    //call function to main 
    fnx1(num);

    return 0;
}

// finding odd or even number with this function 
void fnx1(int num1)
{
    // if statement to fine whether number is odd or even
    if(num1 % 2 == 0)
    {
        printf("\n1\n");
    } //end if
    else
    {
        printf("\n0\n");
    } //end else
}
