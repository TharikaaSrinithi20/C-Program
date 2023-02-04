#include<stdio.h>

int palindrome(int);
int main()
{
	int start = 100,end = 500;
	
	for(itr=1;itr<=end;itr++)
	{
		ans1 = palindrome(num);
		ans2 = prime(num);
	}
	
	int palindrome(int x)
	{
		int dig,rev;
		while(x)
		{
			dig=x%10;
			rev=rev*10+dig;
			x=x/10;
		}
		
		return rev;
	}
	
	int prime(int val)
	{
		int flag;
		while(val)
		{
			
		}
	}
}
