#include<stdio.h>

void main()
{
    int n, a=0, b=1, c, i;

    printf("enter your number ");
    scanf("%d",&n);

    printf("fibonacci Series:\n");

    for(i=1; i<=n; i++)
    {
        printf("%d ",a);
        c = a + b;
        a = b;
        b = c;
    }
}