/*This code will make two functions that will display the sum and average of 3 numbers*/
// Charlie Casey Carney
// 03/02/26

#include <stdio.h>

#define SIZE 3

// fnctions for sum and average
float sum(float, float, float);
float average(float, float);



int main()
{
   int i;
   float num1, num2, num3, total, avg;

   //scanning in users' numbers 
    printf("please enter 3 numbers:\n");
    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);

    total = sum(num1, num2, num3); //function returns sum
    printf("the sum is: %f\n", total);

    average(total, avg); // function returns average


}
//function to calculate sum 
float sum(float a, float b, float c)
{
    return a+b+c;
}
//Function to calculate average
float average(float sum, float av)
{
    av = sum / 3; 
    printf("%.2f", av);
    return av;

}
