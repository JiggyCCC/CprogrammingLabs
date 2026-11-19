/* This code will change degrees faranheit to celcius */
//Charlie Casey Carney
//08/10/25

#include <stdio.h>

int main()
{
    float faranheit;
    float celcius;
    
    printf("enter the degrees faranheit\n");
    scanf("%f", &faranheit);

    celcius = (faranheit - 32.0) * 5.0/9.0;
    printf("%f degrees celcius", celcius);
    
    return 0;
}