/*
Name: Bikeri Kevin Scott
RegNo: PA106/G/28822/25
Description: A program that reads student's name, registration number, and total marks from a binary file and displays it on the screen.
Date: 6th October, 2025
*/

#include <stdio.h>
#include <stdlib.h>
//define a structure to hold student data
struct Student {
    char name[100];
    char regNo[20];
    int totalMarks;
};
FILE *fptr;
//main function
int main(){
    struct Student student;
    //open the binary file in read mode
    fptr = fopen("results.dat", "rb");
    if(fptr == NULL){
        perror("Error");
        return 1;
    }
    //read student data from the file
    printf("Student Details:\n");
    while(fread(&student, sizeof(struct Student), 1, fptr)){
        printf("Name: %s", student.name);
        printf("Registration Number: %s", student.regNo);
        printf("Total Marks: %d\n", student.totalMarks);
        printf("------------------------------\n");// to create a separation between the records
    }
    //close the file
    fclose(fptr);
    return 0;
}