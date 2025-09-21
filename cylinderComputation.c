/*
Name:Bikeri Kevin
RegNo:PA106/G/28822/25
Desscription:A program to calculate the surface area and volume of a cylinder by promptin the user to enter the radius and height of the cylinder.
*/

#include<stdio.h> 
//main function
int main(){
    //variable declaration
    float radius, height, surface_area, volume, pi;
    pi = 3.142;

    //taking input from user
    printf("Enter the radius of the cylinder in (cm): ");
    scanf("%f", &radius);

    printf("\nEnter the height of the cylinder in (cm): ");
    scanf("%f", &height);

    //calculating surface area 
    surface_area = 2*(pi * radius * radius)+(2*pi*radius*height);
    volume = pi * radius * radius * height;

    //printing the result
    printf("\nSurface Area of Cylinder: %.2fcm^2", surface_area);
    printf("\nVolume of the cylinder is: %.2fcm^3", volume);
    
    return 0;
}