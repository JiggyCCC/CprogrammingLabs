/*Enter a number and see if it is evenly divisable*/
// charlie Casey Carney
// 14/10/25

#include <stdio.h>

int main()
{
    int num1;
    int num2;

    printf("enter a number\n");
    scanf("%d", &num1);

    printf("enter another number\n");
    scanf("%d", &num2);

    if (num1 % num2 == 0)
    {
        printf("your number evenly divides\n");
    }
    else
    {
        printf("your number is not evenly divisible");

    }

    return 0;
}
