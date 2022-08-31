#include <stdio.h>
int rev(int a);
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    int r=rev(a);
    printf("%d",r);
}
int rev(int a)
{
    static int m,r=0;
    m=a%10;
    r=r*10+m;
    a=a/10;
    if(a>0)
    {
        rev(a);
    }
    else
    {
        return r;
    }
}
