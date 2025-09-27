/*Name: Bikeri Kevin
Reg No: PA106/G/28822/25
Description: A program to get user's preferred data package.
*/

#include <stdio.h>//preprocessor directive

//main function
int main() {
    
   //Variable declaration
    int number;
    
    //print the data menu to the user
    printf("Select data bundle");
    printf("\n1. 100MB @ 50 KES");
    printf("\n2. 500MB @ 200 KES");
    printf("\n3. 1GB @ 350 KES");
    printf("\n4. 2GB @600 KES");
    
    //geting the user's preffered package
    printf("\4nEnter number 1-4: ");
    scanf("%d", &number);

    //comparing the users input and printing it
    switch(number){
        case 1:
        printf("You selected 100MB. Cost = 50 KES");
        break;
        
        case 2:
        printf("You selected 500MB. Cost = 200 KES");
        break;
        
        case 3:
        printf("You selected 1GB. Cost = 350 KES");
        break;
        
        case 4:
        printf("You selected 2GB. Cost = 600 KES");
        break;
        
        default:
        printf("Invalid Choice.");
        break;
    }
    return 0;
}
