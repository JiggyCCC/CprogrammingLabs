/*This code will allow the user to input two words and compare them to see if they are the same*/
// Charlie Casey Carney 
// 3/3/26

#include <stdio.h>
#include <string.h>

#define SIZE 45

void fnx1(char[], char[]); 
void fnx2(char[]); 

int main()
{

    // Decalre and intialize variables
    char word1[SIZE];
    char word2[SIZE]; 
    int result = 0;
    char string1[SIZE] = "First Word Entered is "; 
    int lenght = 0;

    //ask user to input words
    printf("please enter a word:\n");
    scanf("%s", word1); 

    printf("please enter a second word:\n");
    scanf("%s", word2); 

    // Compare Strings
    result = strcmp(word1, word2);

    // if statement to show string comparison
    if(result == 0)
    {
        printf("words are the same\n");
    } //end if
    else
    {
        printf("words are different\n");
    } //end else

    // function 1 to cntctenate
    fnx1(word1, string1);

    // finding lenght function 2
    fnx2(string1);



    return 0; //end program 



}

//function that strcats two strings
void fnx1(char w1[], char s1[])
{
    strcat(s1, w1);

    printf("%s\n", s1);
}

// function that find strlen
void fnx2(char s1[])
{
    int lenght;
    lenght = strlen(s1); 

    printf("The lenght of the string is %d\n", lenght);
}