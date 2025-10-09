/*
Name: Bikeri Kevin
RegNo: PA106/G/28822/25
Description: This program that allows a user to withdraw money from their bank account as long as the funds are above 0.
Date: 10th October, 2024
*/

#include <stdio.h>

//main function
int main() {
    printf("Welcome to Bikeri Bank. \nYour current balance is Ksh 10,000\n");
    
    //variable declaration
    int balance = 10000;
    int withdraw;


    //checking if balance is sufficient for withdrawal
    while(balance >= 0){
        //prompting user to enter amount to withdraw
        printf("Enter amount to withdraw: ");
        scanf("%d", &withdraw);
        
        //checking if balance is sufficient for withdrawal
        balance = balance - withdraw;
        if (balance <= 0) {
            printf("Insufficient funds. Cannot withdraw the money.\n");
            break;
        }

        
        printf("Your new balance is Ksh. %d\n", balance);


    }
    return 0;
}
