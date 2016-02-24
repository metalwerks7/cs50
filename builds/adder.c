/************************************************
 * adder.c
 *
 * CS50
 * David J. Malan
 *
 * adds two numbers.
 *
 * Demonstrates use of CS50's library.
 ***********************************************/
 
 #include <stdio.h>
 #include <cs50.h>
 
int main(void)
{
    //ask user for input
    printf("Give me an integer: ");
    int x = GetInt();
    printf("Give me another integer: ");
    int y = GetInt();
    
    // do the math
    printf("The sum of %i and %i is %i!\n", x, y, x + y);
} 
 