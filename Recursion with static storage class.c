
#include <stdio.h>
int main()
{
    static int var = 5;
    if(var)
    {
        printf("%d\n",var--);
        main();
    }
    printf("%d",var);
}
 