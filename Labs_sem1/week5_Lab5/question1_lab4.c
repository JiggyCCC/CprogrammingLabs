/*This code will allow the user to input a ltter and 
tell them wether or not it is a vowel*/
// Charlie Casey Carney
// 14/10/25




#include <stdio.h>

int main()
{
    char letter;
    
    letter = '_';

    //allow user to enter a letter.
    printf("enter a word and it will display\n");
    scanf(" %c", &letter);

    //switch statement for vowel or not vowel
    switch(letter)
    {
        case 'A':
        case 'a':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        {
            printf("The character you entered is a vowel");
            break;
        } //end cases

        default:
        {
            printf("your character is not a vowel");
        } //end default
    }
    return 0;
}