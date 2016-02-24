/* This program pairs three kids with their favorite superher */
    
#include <stdio.h>
#include <string.h>

int main()
{
    char kid1[12];
    //kid1 can hold an 11-character name
    //kid2 will be 7 characters (Maddie plus null 0)
    char kid2[] = "Maddie";
    // kid3 is also 7 characters, but specifically defined 
    char kid3[7] = "Andrew";
    // Hero1 will be 7 characters (adding null 0!)
    char Hero1[] = "Batman";
    // Hero2 will have extra room just in case
    char Hero2[34] = "Spiderman";
    char Hero3[25];
    
        kid1[0] = 'K';  //Kid1 is being defined character-by-character
        kid1[1] = 'a';   //Not efficient, but it does work
        kid1[2] = 't';
        kid1[3] = 'i';
        kid1[4] = 'e';
        kid1[5] = '\0';  // Never forget the null 0 so C know when the
                        // string ends
                        
        strcpy (Hero3, "The Incredible Hulk");
        
        printf("%s\'s favorite hero is %s.\n", kid1, Hero1);
        printf("%s\'s favorite hero is %s.\n", kid2, Hero2);
        printf("%s\'s favorite hero is %s.\n", kid3, Hero3);
    
        return 0;
}