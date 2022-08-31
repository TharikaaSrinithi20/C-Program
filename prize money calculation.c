//total prize money over all the contestants//
#include <stdio.h>
int main()
{
    int a,b,i;
    scanf("%d",&i);
    while(i)
    {
        scanf("%d %d",&a,&b);
        printf("%d\n",(10*a)+(90*b));
        i--;
    }
}

