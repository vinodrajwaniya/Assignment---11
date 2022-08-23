#include<stdio.h>

int prime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            break;
    }
    if(n==i)
        return (1);
    else
        return (0);
}

int main()
{
    int n;
    printf("Enter an number: ");
    scanf("%d",&n);
    printf("%d",prime(n));
    return 0;
}