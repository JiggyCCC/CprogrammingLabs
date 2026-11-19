/*This code will allow the user to enter 3 temperatures in farenheit*/
//Charlie Casey Carney
// 4/11/25

#include <stdio.h>

#define SIZE 3

int main()
{
    float fahrenheit[SIZE];
    float celsius[SIZE];
    int i = 0;

    //user inputs temperatures
    printf("enter 3 temperatures in fahrenheit, enter just the number\n");

    //scans input
    for(i = 0; i < SIZE; i++)
    {
        scanf("%f", &fahrenheit[i]);
    } //end for

    //coverts to celsius
    for(i = 0; i < SIZE; i ++)
    {
        celsius[i] = (fahrenheit[i] - (float)32.0) * (5.0/9.0);
    }   //end for

    //print fahrenheit
    printf("the fahrenheit you entered are:\n");

    for(i = 0; i < SIZE; i ++)
    {
        printf(" %.2f\n", fahrenheit[i]);
    } //end for

    /*prints celsius*/
    printf("the celcius converted is:\n");

    for(i = 0; i < SIZE; i ++)
    {
        printf("%.2f", celsius[i]);
    } //end for

    return 0;
}