/*
Name: Bikeri Kevin 
RegNo: PA106/G/G28822/25
Description: A program that checks for a student's exam eligibility using his/her attendance and grades.
*/
#include <stdio.h>

//main function
int main() {
    int marks;
    float attendance;

    //Getting the user's marks and attendance
    printf("Enter your average marks: ");
    scanf("%d",&marks);
    printf("Enter your attendance percentage: ");
    scanf("%f", &attendance);

    //Evaluating the exam eligibility and displaying the result
    if(marks>= 40 && attendance>=75) {
        printf("You are eligible to sit for the exam.\n");
    } else {
        printf("You are NOT eligible to sit for the exam.\n");
    }

    
    
    return 0;
}
