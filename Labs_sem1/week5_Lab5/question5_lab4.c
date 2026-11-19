/*To tell if it is a triangle by side lenghts*/
// Charlie Casey Carney
// 14/10/25

#include <stdio.h>

int main()
{
    float num1;
    float num2;
    float num3;

    printf("enter a side\n");
    scanf("%f", &num1);

    printf("enter another side\n");
    scanf("%f", &num2);

    printf("enter last side\n");
    scanf("%f", &num3);

    if (num1 + num2 <= num3 || num1 + num3 <= num2 || num2 + num3 <= num1)
    {
        printf("this is not a triangle");
    }
    else if (num1 + num2 >= num3 || num1 + num3 >= num2 || num2 + num3 >= num1)
    {
        printf("You have a triuangle\n");
    }

    return 0;
}