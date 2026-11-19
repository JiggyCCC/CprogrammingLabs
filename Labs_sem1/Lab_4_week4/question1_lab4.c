/*This code will allow you to enter three whole 
numbers and desplay them of different lines*/
//Charlie Casey Carney
//07/10/25

#include <stdio.h>

int main()

{
    int n1;
    int n2;
    int n3;

    n1 = 0;
    n2 = 0;
    n3 = 0;

    printf("enter a whole number\n");
    scanf(" %d", &n1);

    printf("enter another whole number\n");
    scanf(" %d", &n2);

    printf("enter another whole number\n");
    scanf(" %d", &n3);

    printf("first number is %d\n", n1);
    printf("second number is %d\n", n2);
    printf("last number is %d\n", n3);

    return 0;
}