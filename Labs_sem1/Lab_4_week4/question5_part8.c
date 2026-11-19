/*This code will calculate the sum of three inputed numbers
and their average*/
//Charlie Casey Carney
// 07/10/25

#include <stdio.h>

int main()

{
    //declaring variables
    float num1;
    float num2;
    float num3;
    float sum1;

    //initializing variables
    num1 = 0;
    num2 = 0;
    num3 = 0;
    sum1 = 0;

    // sum of both numbers
    printf("enter a positive number\n");
    scanf(" %f", &num1);

    printf("enter a positive number\n");
    scanf(" %f", &num2);

    printf("enter a positive number\n");
    scanf(" %f", &num3);
    
    sum1 = num1 + num2 + num3;
    printf("the answer is %.3f\n", sum1);

    //average of both numbers inputed
    sum1 = (num1 + num2 + num3) / 3;
    printf("the average of your numbers is %.3f\n", sum1);

    return 0;
}
