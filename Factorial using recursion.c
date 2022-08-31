#include <stdio.h>
int fact(int a);
int main()
{
    int a,fa;
    printf("Enter a number : ");
    scanf("%d",&a);
    fa=fact(a);
    printf("The factorial of %d is %d",a,fa);
}
int fact(int a)
{
    if(a==0)
    {
        return 1;
    }
    else
    {
        return a*fact(a-1);
    }
}
