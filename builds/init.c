#include <stdio.h>
#include <string.h>
#include <cs50.h>


int main()
{
	//char str[20];
	int i=0;
	printf("Enter your name:\n ");
	string name = GetString();
	//printf("%c",*s);

	while(name[i]!='\0')
	{
		if(name[i]==' ')
		{
			i++;
			printf("%c",*(name+i));
		}
		
		i++;
	}

	return 0;
}