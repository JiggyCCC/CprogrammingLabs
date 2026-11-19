/*this code will calculate the sum and average of three numbers
entered by the user*/
//Charlie casey Carney 
// 03/02/26

#include <stdio.h>

#define SIZE 3 

void sum(float*);
void average(float);

int main()
{
    int i;
    float nums[SIZE];

    printf("enter 3 numbers\n");

    for(i = 0; i < SIZE; i++)
    {
        scanf("%f", &nums[i]);
    }

    sum(nums);


}

void sum(float nums[SIZE])
{
    float total = 0;
    int i;

    for(i = 0; i < SIZE; i++)
    {
        total = total + nums[i];
    }

    printf("total is: %.2f\n", total);
}

void average(float average)
{
    average = 
}