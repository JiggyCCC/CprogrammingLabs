/*This will read in a string, count the characters and vowels*/
//Charlie CaseY Carney 
// 10/3/26

#include <stdio.h>
#include <string.h>

#define SIZE 45

void count_vowels(char[]);
void count_characters(char[]);
void cat(char[]);

int main()
{
    char string[SIZE];

    printf("please enter your name\n");
    fgets(string, SIZE, stdin);

    string[strlen(string) - 1] = '\0';

    count_vowels(string);

    count_characters(string);

    cat(string);

    return 0; 
}

void count_vowels(char str[])
{
    int count = 0; 
    int len = strlen(str);

    for(int i = 0; i < len; i++)
    {   
        switch(str[i])
        {
            case 'o':
            case 'O':
            {
                count = count + 1;

                break;
            }
            case 'E':
            case 'e':
            {
                count = count + 1;

                break;
            }
            case 'a':
            case 'A':
            {
                count = count + 1;

                break;
            }
            case 'i':
            case 'I':
            {
                count = count + 1;

                break;
            }
            case 'u':
            case 'U':
            {
                count = count + 1;

                break;
            }
        }
    }

    printf("You have %d vowels in your name\n", count);
}

void count_characters(char st[])
{
    int lenght = strlen(st);
    int temp;

    printf("you entered %d characters\n", lenght);

    printf("Your reversed name is:\n");

    for(int i = lenght; i >= 0; i--)
    {
        printf("%c", st[i]);
    }
}

void cat(char stri[])
{
    char string2[SIZE] = "I entered the string ";
    strcat(string2, stri);

    printf("\n%s\n", string2);
}