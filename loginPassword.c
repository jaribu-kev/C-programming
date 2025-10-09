/*Name: Bikeri Kevin
RegNo: PA106/G/28822/25
Description: User is supposed to enter "1234" as the password to login .
Date: 10th October, 2024
*/

#include <stdio.h>

//maon function
int main() {
    //variable declaration
    int password;
    
    //checking if the password is correct
    do{
        //prompting the user to enter the  password
    printf("Enter your password: ");
    scanf("%d", &password);

    }while(password != 1234);
    printf("Access granted.\n");
    
    return 0;
}