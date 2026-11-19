/* Write a program that uses the modulus operator, i.e., % , to calculate and display the
remainder for the following arithmetic operations*/
// Charlie Casey Carney
// 30/09/25

#include <stdio.h>

int main()

{
    float a;
    float b;
    float c;
    float d;
    float e;
    float f; 
    char g = '%';

    a = 2 % 2; 
    printf("2%c2 \n is equal to %.2f\n", g, a);

    b = 3 % 2;
    printf("3%c2 \n is equal to %.2f\n", g, b);

    c = 5 % 2;
    printf("5%c2 \n is equal to %.2f\n", g, c);

    d = 7 % 3;
    printf("7%c3 \n is equal to %.2f\n", g, d);

    e = 100 % 33;
    printf("100%c33 \n is equal to %.2f\n", g, e);

    f = 100 % 7;
    printf("100%c7 \n is equal to %.2f\n", g, f);

    return 0;
}