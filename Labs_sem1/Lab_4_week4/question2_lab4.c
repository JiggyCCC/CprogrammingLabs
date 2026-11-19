/*this code will allow the user to input 2 characters and desplay them*/
// Charlie Casey Carney
// 07/10/2025

#include <stdio.h>

int main()

{
    char c1 = '_';
    char c2 = '_';
    
    printf("Enter a single character\n");
    scanf(" %c", &c1);

    printf("Enter anotheer single character\n");
    scanf(" %c", &c2);

    printf("Your first character is %c \n and your other character is %c\n", c1, c2);

    return 0;
}
