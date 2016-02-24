#include<stdio.h>

int main(void)
{
 int i,j,n,b;
 printf("Enter no of rows ");
 scanf("%d",&n);
 b=n;
 for(i=1;i<=n;++i)
 {
    for(j=1;j<=i;j++)
    {
        printf("%*d",b,j);
        b=1;
    }
        b=n;
    b=b-i;
    printf("\n");


 }
 return 0;
}