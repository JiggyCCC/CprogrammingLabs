/*Calculate sum of integers 1 to 5 and display average of the given float points*/
// Charlie Casey Carney
// 30/09/25

#include <stdio.h>

int main()
{
    int result;
    float decimal;

    result = 0;
    decimal = 0;

    result = 1+2+3+4+5;
    printf("The sum of integers 1 to 5 is %d\n", result);

    decimal = (1.0 + 1.1 + 1.2 + 1.3 + 1.4 + 1.5 + 1.6 + 1.7 + 1.8 + 1.9 + 2.0) / 11.0;
    printf("The average of the given float points is %.2f\n", decimal);

    return 0;
}