#include<stdio.h>

void square(int n)
{
    printf("Square is %d",n*n);
}

int main()
{
    int n;
    printf("Enter an number: ");
    scanf("%d",&n);
    square(n);
    return 0;
}