#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    
    do 
    {
        printf("Average number of children per family in US: ");
        n = GetInt();
    }
    while (n == 1 && n == 2);
    // collect user input

    // if user is correct
    if (n == 1)
        printf("That is incorrect\n");
       
    else if (n == 2)
        printf("That is correct\n");
        // tell them they are not correct
}
