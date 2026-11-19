/*this code will decalre and integer (num1), a character(char 1) and
2 poibters that points to an integer and a character */
// Charlie Casey Carney 
// 2/12/25

#include <stdio.h>

int main()
{
    int num1 = 2;
    char char1 = 'A';
    int *ptr1;
    char *ptr2;
    int *ptr3;

    ptr1 = &num1;
    ptr2 = &char1;
    ptr3 = &num1;

    printf("num1 contains %d and is stored at memory location %p\n", num1, &num1);
    printf("char1 contains %c and is located at %p\n", char1, &char1); 

    printf("ptr1 is located at %p\n ptr2 ia located at %p\n", &ptr1, &ptr2); 

    printf("ptr1 is located at %p\n", ptr1);
    printf("ptr1 contains %d\n", *ptr1);

    printf("ptr2 is located at %p\n", ptr2);
    printf("ptr2 contains %c\n", *ptr2);

    printf("ptr3 is located at %p\n", ptr3);
    

    

    return 0;


}