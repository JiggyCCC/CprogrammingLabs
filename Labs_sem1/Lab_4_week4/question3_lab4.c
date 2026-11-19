/*Ask the user to enter 3 floating-point numbers (i.e., numbers with a decimal part).
Display the 1 st number correct to 4 decimal places, the 2 nd number correct to 3
decimal places, and the 3 rd with no decimal places on separate lines.*/
// Charlie Casey Carney
// 07/10/25

#include <stdio.h>

int main()

{
    float n1;
    float n2;
    float n3;

    n1 = 0;
    n2 = 0;
    n3 = 0;

    printf("enter a number\n");
    scanf(" %f", &n1);

    printf("enter a number\n");
    scanf(" %f", &n2);

    printf("enter a number\n");
    scanf(" %f", &n3);

    printf("First is %.4f\n second is %.3f \n and last is %.0f", n1, n2, n3);

    return 0;
}