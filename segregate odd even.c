#include<stdio.h>

int main()
{
	int size,start,end,temp;
	scanf("%d",&size);
	
	int arr[size];
	
	for(int itr=0;itr<size;itr++)
	{
		scanf("%d",&arr[itr]);
	}
	
	start=0;
	end = size-1;
	for(start=0,end=size-1;start<size;start++,end--)
	{
		while(start<size && arr[start]%2 ==1) start++;
		while (end>0 && arr[end]%2 ==0) end--;
		if(start<end) temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
	}
	
	for(int itr=0;itr<size;itr++) printf("%d ",arr[itr]);
}
