#include <stdio.h>
#include <string.h>

#define SIZE 7
#define MAX_NAME 21   // 20 characters + 1 for '\0'

void check_student(char *students[], int size);
void write_to_file(char *students[], int size, char mode[]);

int main()
{
    // Part (a) - one-dimensional array of strings
    char *students[SIZE] = {
        "Harry Potter",
        "Ron Weasley",
        "Hermione Granger",
        "Ginny Weasley",
        "Neville Longbottom",
        "Luna Lovegood",
        "Cho Chang"
    };

    // Part (b)
    check_student(students, SIZE);

    // Part (c) - write current names to file
    write_to_file(students, SIZE, "w");

    // Extra names to append
    char *new_students[2] = {
        "Seamus Finnegan",
        "Katie Bell"
    };

    // Part (c) - append new names to same file
    write_to_file(new_students, 2, "a");

    return 0;
}

void check_student(char *students[], int size)
{
    char name[MAX_NAME];
    int found = 0;

    printf("Enter a student name: ");
    fgets(name, MAX_NAME, stdin);

    // Remove newline from fgets
    name[strcspn(name, "\n")] = '\0';

    for(int i = 0; i < size; i++)
    {
        if(strcmp(name, students[i]) == 0)
        {
            found = 1;
        }
    }

    if(found == 1)
    {
        printf("%s is in Dumbledore's Army\n", name);
    }
    else
    {
        printf("%s is not in Dumbledore's Army\n", name);
    }
}

void write_to_file(char *students[], int size, char mode[])
{
    FILE *fp;

    fp = fopen("DA.txt", mode);

    if(fp == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    for(int i = 0; i < size; i++)
    {
        fprintf(fp, "%s\n", students[i]);
    }

    fclose(fp);
}