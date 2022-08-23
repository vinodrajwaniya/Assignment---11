#include<stdio.h>

void fib(int n)
{
    int next=0,pre=0,cur=1,i;
     printf("1 ");
    for(i=0;i<(n-1);i++)
    {
        next=pre+cur;
        printf("%d ",next);
        pre=cur;
        cur=next;
    }
}

int main()
{
    int n;
    printf("Enter an number: ");
    scanf("%d",&n);
    fib(n);
    return 0;
}