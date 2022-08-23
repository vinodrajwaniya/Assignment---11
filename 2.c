#include<stdio.h>

int hcf(int a, int b)
{
    int i,hcf=1,min;
    min=a<b?a:b;
    for(i=1;i<=min;i++)
    {
        if(a%i==0 && b%i==0)
            hcf=i;
    }
    return hcf;
}

int main()
{
    int a,b;
    printf("Enter two number ");
    scanf("%d%d",&a,&b);
    printf("hcf is %d",hcf(a, b));
    return 0;
}