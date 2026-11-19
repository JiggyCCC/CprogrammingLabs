/*this code will show output*/
//Charlie CaseY Carney 
//24/02/26

#include <stdio.h>

int main()
{
    char *text = "some text";

    printf("%s\n", text);
    printf("%c\n", text);
    printf("%c\n", *"more text");
    printf("%c\n", *(text+1));
    printf("%s", text + 1);
    printf(text);
    *(text + 4) = '\0' ; printf("\n%s\n", text);
    printf("%c", "text"[2]);
    printf("%s", "text" + 2);
}