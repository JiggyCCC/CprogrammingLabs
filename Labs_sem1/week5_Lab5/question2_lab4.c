/*This code will tell the user wether a number is even or odd 
between 1 and 100*/
// Charlie Casey Carney
// 14/10/25

#include <stdio.h>

int main()
{
    //decalre variables
    int num1;

    //assign variables

    printf("enter a number between 1 and 100\n");
    scanf("%d", &num1);

    if (num1 %2 == 0)
    {
        printf("your number is even");
    }
    else
    {
        printf("your number is odd");
    }

    return 0;
}