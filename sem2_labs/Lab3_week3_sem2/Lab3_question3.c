/*Finding highest number of three using return in functions*/
// Charlie Casey Carney 
// 10/2/26

#include <stdio.h>

int fxn1(int, int, int, int);

int main()
{
    int num1;
    int num2;
    int num3;
    int highest; 

    printf("please enter 3 numbers:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    highest = fxn1(num1, num2, num3, highest);
}

int fxn1(int n1, int n2, int n3, int h1)
{
    if(n1 > n2 && n1 > n3)
    {
        h1 = n1;
    }
    else if(n2 > n1 && n2 > n3)
    {
        h1 = n2;
    }
    elif
    
}
