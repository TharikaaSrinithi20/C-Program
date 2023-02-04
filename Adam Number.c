#include<stdio.h>
int reverse(int);
int square(int);

int main()
{
  int num,sqnum,rnum,sqrnum,rsqrnum;
  scanf("%d",&num);
  sqnum=square(num);
  rnum = reverse(num);
  sqrnum=square(rnum);
  rsqrnum=reverse(sqrnum);
  
  printf("%d%d",sqnum,rsqrnum);
  
  if(sqnum == rsqrnum)
    printf("Adam");
  else
    printf("Not Adam");
}


int square(int val) {
return val*val;}
int reverse (int val)
{
  int rev=0,dig;
  while(val)
  {
    dig=val%10;
    rev=rev*10+dig;
    val=val/10;
  }
  
  return rev;
}
