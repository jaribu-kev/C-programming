/*
Name: Bikeri Kevin
RegNo: PA106/G/28822/25
Description: This program that plays a guessing number game where the user has to guess a number between 1 and 20.
Date: 10th October, 2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int number, guess, attempts = 0;
    printf("Welcome to the Guessing Number Game!\nI have selected a number between 1 and 20.\nCan you guess it?\n");

    
    //seeding a random number between 1 and 20
    srand(time(0));

    //generating a random number between 1 and 20
    guess = rand() % 20 + 1;

    //looping until the user guesses the correct number
    do{
        //Getting a random number between 1 and 20 from the user
        printf("Enter a number between 1 and 20: ");
        scanf("%d", &number);
        attempts++;

        //comparison of the guessed number and the actual number
        if (number < guess){
            printf("Too low!\n");
        }
        else if (number > guess){
            printf("Too high!\n");
        }
        else{
            printf("Congratulations! You guessed the number %d in %d attempts.\n", guess, attempts);
        }
    }while(number != guess);
    
    return 0;
}