/*This code will find the averaeg of three numbers by passsing it through a function */
//Charlie casey Carney
//11/2/26

#include <stdio.h>

int fxn1(int, int, int);

int main()
{
    int num1;
    int num2;
    int num3;
    int average;

    printf("enter 3 numbers to find average:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    average = fxn1(num1, num2, num3);

    printf("the average is %d\n", average);

    return 0; 
}

int fxn1(int n1, int n2, int n3)
{
    int avg = 0;

    avg = (n1 + n2 + n3)/3;

    return avg;
}