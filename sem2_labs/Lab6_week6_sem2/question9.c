/**/
// Charlie Casey Carney 
// 03/3/27

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 21



int main()
{
    char *names[SIZE] = {"Mark", "Charlie", "Luca", "Adam", "Sam", "Daniel", "Aryan"};
    char user_name[SIZE]; 
    int result = 0;
    int i;

    printf("Please enter your name:\n"); 
    scanf("%s", user_name);

    for(i = 0; i<SIZE; i++)
    {
        if(strcmp(names[i], user_name) == 0)
        {
            printf("hello, welcome back %s\n", user_name);
            result = 1; 
            break;
        }// end if
    } //end for

    if(result == 0)
    {
        printf("Your name waas not founf\n");
    }// end if

    return 0;

}