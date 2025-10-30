/*
Name: Bikeri Kevin
RegNo: PA106/G/G28822/25
Descriotion: A program that calculates hotel's occupied and vaccant rooms.
Date: 29 October 2025
*/

#include <stdio.h>//preprocessor directive

//main function
int main(){
    int occupied;
    int vacant;

    int occupancy[5][10]={
        {1,0,1,1,1,1,0,0,1,0},
        {1,1,1,1,0,1,1,1,0,1},
        {0,0,1,0,1,1,1,0,1,1},
        {1,1,1,1,1,0,0,1,1,0},
        {0,1,0,1,1,1,1,1,0,1}
    };
    //checking if the rooms are occupied or vacant
    for(int i=0;i<5;i++){
        occupied=0;
        vacant=0;
        for (int j=0;j<10;j++){
            if(occupancy[i][j]==1){
             occupied ++;}
            else{
                vacant ++;
            }
        }
        printf("Floor %d has %d occupied rooms and %d vacant rooms\n", i+1, occupied, vacant);
    }

    return 0;
}