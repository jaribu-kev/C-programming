/*
Name:Kevin Bikeri
RegNo:PA106/G/28822/25
Description:A program to check if a user is eligible for a loan based on age and salary.
*/

#include<stdio.h>//preprocessor directive to include standard input output

//main fuction
int main(){
    //variable declaration
    int age;
    float salary;

    //Getting the age and salary of the user and verifying if they are eligible for the loan.
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your salary in (Ksh): ");
    scanf("%f", &salary);

    if(age>=21 && salary>21000){
        printf("Conratulations yoou qualify for a loan.\n");
    }
    else{
        printf("Unfortumately, we are unable ti offer you a loan at this time.\n");
    }
}