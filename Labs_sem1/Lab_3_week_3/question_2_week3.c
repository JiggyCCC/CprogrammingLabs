/*this code will calculate the volume and surface area of a box with given lengths.
It will also calculate the area of a circle given its radius and assuming pie
is equal to 3.14*/
//Charlie Casey Carney
// 30/09/25

#include <stdio.h>

int main()
{
    //box variables
    int box_height;
    float box_lenght;
    float box_width;
    float volume_sum;
    float surface_sum;

    //circle variables and measurements
    float circle_radius = 4.8;
    float pie = 3.14;
    float circle_area = 0;

    //box measurements
    box_height = 10;
    box_lenght = 11.5; //I miss spelt length
    box_width = 2.5;
    volume_sum = 0;
    surface_sum = 0;


    //calculate the volume
    volume_sum = box_lenght*box_width*box_height;

    printf("the volume of the box is eqaul to %f centimeters\n", volume_sum);
    
    // calculate the surface area
    surface_sum = (box_height*box_lenght) + (box_height*box_width) + (box_lenght*box_width);
    surface_sum = surface_sum*2;

    printf("the surface area of the box is equal to %f centimeters\n", surface_sum);

    circle_area = pie* (circle_radius * circle_radius);

    printf("The area of the circle with a radius 4.8cm is equal to %f centimeters\n", circle_area);

    return 0;

}