/*
Name: Bikeri Kevin
RegNo: PA106/G/28822/25
Description: A Simple C program to prompt user for their details and output them.
*/
#include<stdio.h> // preprocessor

//main function
int main(){
    int age, ID_No;
    float height, bank_balance;

    printf("Enter Your Age: ");
    scanf("%d", &age);

    printf("\nEnter Your ID Number: ");
    scanf("%d", &ID_No);

    printf("\nEnter Your Height: ");
    scanf("%f", &height);

    printf("\nEnter Your Bank Balance: ");
    scanf("%f", &bank_balance);

    //output users' input

    printf("HERE IS YOUR DATA");
    printf("\n____________________");
    printf("\nYour Age: %d", age);
    printf("\nYour ID Number: %d", ID_No);
    printf("\nYour Height: %f", height);
    printf("\nYour Bank Balance: %d", bank_balance);

    return 0;
}