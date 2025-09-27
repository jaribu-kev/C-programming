/*
Name: Bikeri Kevin
RegNo: PA106/G/G28822/25
Descriotion: A program that calculates the water bill based on customer consumption.
*/

#include <stdio.h>//preprocessor directive

//main function
int main() {
    float units, billAmount;

    //taking unit amount from the user
    printf("Enter the number of units consumed: ");
    scanf("%f", &units);

    //calculating the bill amount
    if(units <0) {
        printf("Units cannot be negative");}
    else if(units >=0 && units <=30){
        billAmount=units * 20;
    }
    else if(units >=31 && units <=60){
        billAmount=units * 25;
    }
    else if(units >=61){
        billAmount=units * 30;
    }
    //displaying the bill amount
    printf("Your water bill is: %.2f KES\n", billAmount);

    return 0;
}