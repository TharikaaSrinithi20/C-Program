//Chef is playing with weights. He has an object weighing W units. He also has three weights each of X, Y,and Z units respectively. 
//Help him determine whether he can measure the exact weight of the object with one or more of these weights.
//If it is possible to measure the weight of object with one or more of these weights, print YES, otherwise print NO.


#include <stdio.h>

int main() 
    {
        int w,x,y,z;
        int T;
        scanf("%d\n",&T);
        while(T)
        {
            scanf("%d %d %d %d",&w,&x,&y,&z);
            if(w==x|| w==y|| w==z || w==x+y || w==y+z || w==z+x || w==x+y+z)
            printf("YES\n");
            else
            printf("NO\n");
            T--;
        }
    
	return 0;
}

