#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main (int argc, string argv[])
{
    if(argc !=2)
    {
        printf("please put in command line argument: example - ./vigenere command\n");
        return 1;
    }
    string key = argv[1];
    int keylength = strlen(key);
    for (int i=0;i<keylength; i++)
    {
        if(!isalpha(key[i]))
        {
            printf("please make sure command is letter only. Please no numbers or special characters!\n");
            return 1;
        }
    }
    string input = GetString();

    for (int i=0, k=0; i<keylength; i++)
    {
        if(isalpha(input[i]))
        {
            if(isupper(input[i]))
            {
                input[i]=((input[i]-'A')+(key[k%keylength]))%26+'A';
            }
            else
            {
                if(islower(input[i]))
                {
                input[i]=((input[i]-'a')+(key[k%keylength]))%26+'a';
            }
        }
    }
}
printf("%s\n",input);
return 0;
}