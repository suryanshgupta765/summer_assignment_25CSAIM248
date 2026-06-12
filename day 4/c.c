#include<stdio.h>

void main()
{
    int n,temp,d,sum=0;

    printf("enter number: ");
    scanf("%d",&n);

    temp=n;

    while(n>0)
    {
        d=n%10;
        sum=sum+(d*d*d);
        n=n/10;
    }

    if(temp==sum)
        printf("armstrong number");
    else
        printf("not armstrong number");
}