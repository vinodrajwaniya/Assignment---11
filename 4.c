#include<stdio.h>


int prime(int a)
{
    int i,n,flag=0;
    for(n=a;1;n++)
    {
        flag=0;
        for(i=2;i<=n/2;i++)
        {
        if(n%i==0)
        flag=1;
        }
        if(flag==0)
        {
            return(n);
            break;
        }
    }
}

int main()
{
    int a;
    printf("Enter an number: ");
    scanf("%d",&a);
    printf("%d",prime(a));
    return 0;
}