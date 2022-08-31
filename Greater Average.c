#include <stdio.h>

int main() 
    {
        float A,B,C;
        int T;
        scanf("%d\n",&T);
        while(T)
        {
            scanf("%f %f %f",&A,&B,&C);
            if((A+B)/2>C)
            printf("YES\n");
            else
            printf("NO\n");
            T--;
        }
        return 0;
        
    }

