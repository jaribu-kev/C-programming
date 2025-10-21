/*
Name: Bikeri Kevin
RegNo: PA106/G/28822/25
Description: This program calculates the electric bill based on the number of units consumed.
Date: 21st October, 2024
*/
 #include <stdio.h>

//function protoype 
float calculateElectricBill(float x);
//main function
void main() {
    float units, bill;
    printf("Enter the number of units consumed this month: ");
    scanf("%f", &units);

    bill=calculateElectricBill(units);
    printf("The electric bill for %.2f units is: %.2f\n", units, bill);
}
//function to calculate electric bill
float calculateElectricBill(float x){
    float amount;
    if(x <= 100){
        amount = x * 10;
    }
    else if(x >= 100 && x <= 200){
        amount = (100 * 10) + ((x - 100) * 15);
    }
    else{
        amount = (100 * 10) + (100 * 15) + ((x - 200) * 20);
    }
    return amount;
}
    