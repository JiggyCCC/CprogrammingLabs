/*This code will print the capitals of countries*/
// Charlie Casey Carney 
// 3/3/26

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 32

int main()
{
    char *countries[SIZE] = {"Australia", "Belgium", "China", "Denmark", "England", "France", "Greece", "Ireland", "Scotland", "wales"};

    char *cities[SIZE] = {"Canberra", "Brussels", "Beijing", "Copenhagen", "London", "Paris", "Athens", "Dublin", "Endinburgh", "Cardiff" };

    int result = 0;
    char input[SIZE];

    printf("please enter a country:\n"); 
    scanf("%s", input);

    for(int i = 0; i < SIZE; i++)
    {
        if(strcmp(input, countries[i]) == 0)
        {
            printf("%s", cities[i]);
            result++;
        }
    }

    if(result == 0)
    {
        printf("counbtry not found");
        
    }

    return 0;

}