#include <stdio.h>
int test();
int g;
int main()
{
    test(); 
}
int test()
{
  int l;
  static int s;
  l=++s;
  ++g;
  printf("%d %d %d \n",l,s,g);
  if(l<=2)
  {
      test();
      return;
  }
  printf("%d %d %d\n",l,s,g);
}
