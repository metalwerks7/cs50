/************************************************
 * 
 *  Author: Josh Mena
 *  pset1:  greedy
 *  date: 2-10-16 
 *
 *  Return change with the least amount of coins.
 *  
 *  
 ***********************************************/
#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float f;
    
    //declares and initializes variable value for coins
    int q, d, n, p;
    q = 25;
    d = 10;
    n = 5;
    p = 1;
    
    do
        {
        
        // ask user how much change is owed.    
        printf("How much change is owed?\n ");
        f = GetFloat();
        
        }
   //checks input validation (no negatives) 
    while (f < 0);
    
     // convert amount to pennies 
    int amount;
    amount = round(f * 100);   
    
    
    //set counter to track coins
    int counter = 0;    
    
    // first iteration to calculate how many quarters    
        while (amount >= q)
        {
            amount = amount - q;
            counter++; 
        }
    // first iteration to calculate how many dimes    
        while (amount >= d)
        {
            amount = amount - d;
            counter++; 
        }
    
    // first iteration to calculate how many nickels    
        while (amount >= n)
        {
            amount = amount - n;
            counter++; 
        }
    
    // first iteration to calculate how many pennies
        while (amount >= p)
        {
            amount = amount - p;
            counter++; 
        }
    
    // total of coins incremented on each loop 
    printf("%i\n", counter);

}