/************************************************
 * 
 *  Author: Josh Mena
 *  pset1:  water
 *  date: 2-10-16 
 *
 * Ask users how long they take showering in 
 * minutes. Calculate the amount of bottles it 
 * takes to shower. 
 * 
 ***********************************************/
 #include <cs50.h>
 #include <stdio.h>
 
 int main(void)
 {
     int m; // declaring variable m to hold the minutes integer
     int bottles; // declaring variable bottles to calculate
     do 
     {  
         printf("How many minutes to shower?\n ");
         m = GetInt(); //initiating variable m to catch users input
     }
     while (m < 1);
     
     bottles = m * 192 / 16; 
     
     printf("You have used this amount of bottles:\n %d\n", bottles);
     
 }
  