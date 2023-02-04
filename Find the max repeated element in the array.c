#include<stdio.h>

int main()
{
	int size;
	scanf("%d",size);
	int arr[size];
	int hash[100];
	for(int itr=0;itr<size;itr++)
	{
		scanf("%d",&arr[itr]);
	}
	
	for(int itr=0;itr<size;itr++)
	{
		hash[arr[itr]]++;
	}
	
	for(int itr=1;itr<20;itr++)
	printf("%d",hash[itr]);
	
	int i=0;
	int max = INT_MIN,pos;
	for(int i=0;i<100;i++)
	{
		if(hash[i]>max)
		{
			max=hash[i];
		}
		
		pos=i;
	}
	
	printf("%d",pos);
}
