#include<stdio.h>
int factorial(int n);

int sum (int n)
{
    int sum=0;
    sum=sum+(factorial(n)/n);
    return(sum);
}

int factorial(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return (fact);
}

int main()
{
    int n;
    printf("Enter an number ");
    scanf("%d",&n);
    printf("Sum of factorial is %d",sum(n));
}