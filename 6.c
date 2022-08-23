#include<stdio.h>

void prime(int a, int b)
{
    int i,n,flag=0,min,max;
    min=a<b?a:b;
    max=a>b?a:b;
    for(n=min;n<=max;n++)
    {
        flag=0;
        for(i=2;i<=n/2;i++)
        {
        if(n%i==0)
        flag=1;
        }
        if(flag==0)
        printf("%d ",n);
    }
}

int main()
{
    int a,b;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    prime(a, b);
    return 0;
}