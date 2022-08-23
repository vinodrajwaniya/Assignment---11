#include<stdio.h>

int lcm(int a, int b)
{
    int i,k;
    k=a>b?a:b;
     while(1)
    {
        if(k%a==0 && k%b==0)
        {
            return k;
            break;
        }
      ++k;
    }
    
}

int main()
{
    int a,b;
    printf("Enter two number ");
    scanf("%d%d",&a,&b);
    printf("LCM is %d",lcm(a, b));
    return 0;
}