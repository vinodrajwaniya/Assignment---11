#include<stdio.h>

void pascal(int n)
{
    int i,j;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=(n-i);j++)
            printf(" ");
        for(j=0;j<=i;j++)
        {
            printf("%d ",combination(i,j));
        }
        printf("\n");
    }    

}

int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
        fact=fact*i;
    return (fact);
}
int combination(int n, int r)
{
    return fact(n)/(fact(r)*fact(n-r));

}

int main()
{
    int n;
    printf("Enter an number ");
    scanf("%d",&n);
    pascal(n);
}