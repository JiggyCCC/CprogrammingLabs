/*This code will claculate how much heart beats someone has had in their life time
assuming that their heart rate has an average of 75 BPM*/
// Charlie Casey Carney
// 08/10/25

#include <stdio.h>

int main()
{
    float bpm = 75;
    float age = 0;
    float sum1 = 0;

    printf("enter your age\n");
    scanf("%f", &age);

    sum1 = (525600 * age) * bpm;
    printf("You have had %.0f heart beats in your lifetime\n", sum1);

    return 0;
}