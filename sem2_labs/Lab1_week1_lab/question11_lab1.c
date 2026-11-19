/*This code will calcukate and display the value of each element of mp1*/
// Charlie Casey Carney
// 27/01/26

#include <stdio.h>

#define SIZE 5
int main()
{
    float litres[] = {11.5, 11.21, 12.7, 12.6, 12.4};
    float miles[] = { 471.5, 358.72, 495.3, 453.6, 421.6};
    float mpl[SIZE];
    float *ptr1 = &litres[0];
    float *ptr2 = &miles[0]; 
    int i = 0;

    for(i = 0; i < SIZE; i++)
    {
        mpl[i] = *(ptr2 + i) / *(ptr1 + i); 
        printf("\n mpl contains %f\n", mpl[i]);
    }

    return 0;
}