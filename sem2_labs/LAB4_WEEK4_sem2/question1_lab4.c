/*This code will use two functions to calculate the area of a circle and square*/
// Charlie Casey Carney
// 17/02/26

#include <stdio.h>

#define PI 3.14

//define functins
int fnx1(int);
float fnx2(int);

int main()
{
    // declare variables
    int square;
    int radius;
    int squarearea;
    float circlearea;

    // ask user to input side and radius
    printf("Please enter the lenght of a side of a square\n");
    scanf("%d", &square);

    printf("Please enter the lenght of radius\n");
    scanf("%d", &radius);

    //pass by reference functions
    squarearea = fnx1(square);
    circlearea = fnx2(radius);

    // print areas
    printf("The area of square is: %d\n", squarearea);

    printf("The area of the circle is: %.2f\n", circlearea);

    return 0;

}

//calculate square area
int fnx1(int side)
{
    int area_square;

    area_square = side * side;

    return area_square;
}

// calculate circle area
float fnx2(int rad)
{
    float area_circle; 
    float pi = 3.14;

    area_circle = PI * (rad * rad);

    return area_circle;
}

