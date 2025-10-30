/*
Name: Bikeri Kevin
RegNo: PA106/G/G28822/25
Descriotion: A program that calculates hotel weekly revenue based on the users input.
Date: 29 October 2025
*/

#include <stdio.h>//preprocessor directive

//main function
int main(){
    float revenue[7];
    float totalRevenue=0.0, average;

    for(int i=1; i<=7; i++){
        printf("Enter revenue for day %d: ", i);
        scanf("%f", &revenue[i]);
        totalRevenue += revenue[i];
    }
    average=totalRevenue/7;
    printf("Total weekly revenue is: Ksh %.2f \n", totalRevenue);
    printf("Average daily revenue is: Ksh %.2f \n", average);
    return 0;
}