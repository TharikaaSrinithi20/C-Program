#include<stdio.h>
#include<stdlib.h>

int main()
{
  char str[100];
  scanf("%[^\n]s",str);
  int hold,travel;
  for(hold=0,travel=0;str[travel]!=NULL;travel++)
  {
    if(!(str[travel]=='a' ||  str[travel] == 'e' || str[travel] == 'i' || str[travel] == 'o' || str[travel] == 'u'))
    {
        str[hold]=str[travel];
        hold++;
    }
  }
  str[hold]=NULL;
  printf("%s",str);
}
