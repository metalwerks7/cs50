#include <stdio.h>

int main()
{
    int a[5];
    int i;

    for (i=0; i<5; i++)
        a = i;
        
    for (i=0; i<5; i++)
        printf("a[%d] = %d\n", i, a);
}