#include<stdio.h>

int main()
{
	char str[100];
	scanf("%[^\n]s",str);
	
	for(int itr=0;str[itr]!=NULL;itr++)
	{
		if(str[itr]>65 && str[itr]<97) str[itr]+=32;
		else if (str[itr]>97 && str[itr]<128) str[itr]-=32;
		else if(str[itr]==32) str[itr]=' ';
	}
	
	printf("%s",str);
}
