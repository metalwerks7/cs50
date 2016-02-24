#include <stdio.h>

int main ()
{
    float a, b;
    
    printf("How much of a bonus did you get? \n");
    scanf("%f", &a);
    
    b = .90 * a;
    
    printf("if you give 10 percent to charity, you will ");
    printf("have %.2f.\n", b);
    
    return 0;
    
}