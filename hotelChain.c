/*
Name: Bikeri Kevin
RegNo: PA106/G/G28822/25
Descriotion: A program that calculates the number of occupied rooms in an hotel chain.
Date: 29 October 2025
*/
#include <stdio.h>

int main() {
    //declaration and initialization
    int sum=0, i, j, k;
   int chain[3][5][10]={
      {
        {1,0,1,1,1,1,0,0,1,0},
        {1,1,1,1,0,1,1,1,0,1},
        {0,0,1,0,1,1,1,0,1,1},
        {1,1,1,1,1,0,0,1,1,0},
        {0,1,0,1,1,1,1,1,0,1}
    },
    {
        {1,0,1,1,1,1,0,0,1,0},
        {1,1,1,1,0,1,1,1,0,1},
        {0,0,1,0,1,1,1,0,1,1},
        {1,1,1,1,1,0,0,1,1,0},
        {0,1,0,1,1,1,1,1,0,1}
    },
    {
        {1,0,1,1,1,1,0,0,1,0},
        {1,1,1,1,0,1,1,1,0,1},
        {0,0,1,0,1,1,1,0,1,1},
        {1,1,1,1,1,0,0,1,1,0},
        {0,1,0,1,1,1,1,1,0,1}
    }
   };
   //adding up all occupied rooms in the hotel chain and printing the total
   for(i=0; i<3; ++i){
       for(j=0; j<5; ++j){
           for(k=0; k<10; ++k){
               sum=sum+chain[i][j][k];
               }
           }
       }
   printf("The number of occupied rooms is: %d\n", sum);

    return 0;
}