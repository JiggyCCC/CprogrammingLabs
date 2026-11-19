// Charlie Casey Carney
// 23/09/25
// This is corrected code which declares the data each variable holds



#include <stdio.h>
int main()
{
    // Program to illustrate errors in a C program
    int num2 = 600;
    int num1 = num2;
    float num3;
    num1 = 400;
    num3 = num2;
    printf("num1 contains %d\n", num1);
    printf("num2 contains %d and num3 contains %f", num2, num3);
    return 0;
}
