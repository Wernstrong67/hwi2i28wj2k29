// to calculate reverse value of given int
#include<stdio.h>
void main()
{
  int d,n,rev=0,ncopy;
  printf("enter one integer:");
  scanf("%d",&n);
  ncopy=n;
  while(n>0)
  {
    d=n%10;
    rev=rev*10+d;
    n=n/10;
  }
  printf("reverse value of %d is %d ",ncopy,rev);
}
