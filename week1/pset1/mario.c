/************************************************
 * 
 *  Author: Josh Mena
 *  pset1:  mario
 *  date: 2-10-16 
 *
 *  Prompt and validate users input 
 *  Draw the half-pyramid with (##)
 *  
 * 
 ***********************************************/
#include <cs50.h>
#include <stdio.h>
 
int main(void)
{
     int h; //declaring variable to hold height
     
     do 
     {
          printf("Height: ");
          h = GetInt(); //initiating variable to receive int 
     }
     while (h < 0 || h >= 24); //validating input between 0 to 23 
    
     for (int i = 0; i < h; i++) // outer loop for nesting 
     {
         
         for (int s = h; s > i + 1; s--) // inner loop to print spaces decreasing
            {
               printf(" ");
            }   
         
         for (int j = 0; j < i + 2; j++) // inner loop to print "#"
            {
               printf("#");
            }
        
         
        printf("\n");
     }
 
}
 