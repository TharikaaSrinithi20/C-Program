#include <stdio.h>
int gcd(int a,int b);
int main()
{
    int a,b,x;
    printf("Enter values for a and b :");
    scanf("%d %d",&a,&b);
    x=gcd(a,b);
    printf("%d",x);
}
int gcd(int a,int b)
{
    if(a==b)
    {
        return a;
    }
    else if(a>b)
    {
        gcd(a-b,b);
    }
    else
    {
        gcd(a,b-a);
    }
}