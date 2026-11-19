/*this code will give definition to the following string*/
// Charlie Casey Carney 
// 24/02/26

#include <stdio.h>

int main()
{
    char name[] = {'R', 'o', 'b', 'e', 'r','t'};

    //missing the null terminator 
    puts(name);

    //there should be no "&'
    scanf("%s", &name);

    strcpy( name, "philip");
    // should be other way as name would be source string

    *(name + 5) = "a";
    // character must be in single quotes

    name = "philip";
    // name is char literal which cannot be set to a sting





}