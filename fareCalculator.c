/*
Name: Bikeri Kevin
RegNo: PA106/G/28822/25
Description: This program calculates the user's fare based on the distance in kilometers travelled.
Date: 21st October, 2024
*/
 #include <stdio.h>

//function protoype 
float calculateFare(float x);

void main() {
    float distance, fare;
    printf("Enter the distance traveled in kilometers: ");
    scanf("%f", &distance);
    fare=calculateFare(distance);
    printf("The fare for traveling %f kilometers is Ksh: %.2f\n", distance, fare);
}
//function to calculate fare
float calculateFare(float x){
    float fare;
    fare=x * 100;
    return fare;

}
