/*This code will use strlen and strcat*/
// Charlie Casey Carney 
// 3/3/26

#include <stdio.h>
#include <string.h>

#define SIZE 100

void fxn1(char[]);
void fxn2(char[], char[]); 

int main()
{
    char str1[SIZE];
    char str2[SIZE] = "my sentence is; ";

    printf("please enter a sentence less that 100 letters\n");
    fgets(str1, sizeof(str1), stdin);

    fxn1(str1);

    fxn2(str1, str2);

    return 0;

}

void fxn1(char s1[])
{
    int lenght = 0;
    lenght = strlen(s1);

    printf("your sentence is %d characters long\n", lenght);
}

void fxn2(char st[], char st1[])
{
    strcat(st1, st);

    printf("%s\n", st1); 
}