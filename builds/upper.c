#include <stdio.h>
#include <ctype.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    

    string name = GetString();
    //printf("%lu\n", strlen(name));
    
    name[0] = toupper(name[0]);
    printf("%c", (name[0]));
    
    for (int i = 0; i < strlen(name); i++)
        {
           
           if (name[i] == ' ')
                {
                    name[i+1] = toupper(name[i+1]);
                    printf("%c", (name[i+1]));
 
                }           
           
        }
   
}