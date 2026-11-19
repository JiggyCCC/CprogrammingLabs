// Description: This is corrected code which declares the data each variable holds
// Author: Charlie Casey Carney
// Date: 23/09/25

#include <stdio.h>

int main()
{
    // Program to illustrate errors in a C program
    int num2 = 600;
    int num1 = 0;
    float num3 = 0;


    num1 = 400;
    num3 = num2;
    num1 = num2;
    
    printf("num1 contains %d\n", num1);
    printf("num2 contains %d and num3 contains %f", num2, num3);

    return 0;
}