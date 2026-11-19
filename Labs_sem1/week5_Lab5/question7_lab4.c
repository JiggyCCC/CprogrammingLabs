/*Numbers one to seven represent days of the weel*/
//Charlie Casey Carney
// 14/10/25

#include <stdio.h>

int main()
{
    int num;

    printf("enter a number from 1 to 7\n");
    scanf("%d", &num);

    switch (num)
    {
        case 1:
        {
            printf("sunday\n");
        }
         case 2:
        {
            printf("Monday\n");
        }
         case 3:
        {
            printf("Tuesday\n");
        }
         case 4:
        {
            printf("Wednesday\n");
        }
         case 5:
        {
            printf("Thursday\n");
        }
         case 6:
        {
            printf("Friday\n");
        }
         case 7:
        {
            printf("Saturday\n");
        }
    }
    return 0;
}