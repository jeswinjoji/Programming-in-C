#include<stdio.h>
int main()
{
  int n,r,sum=0,temp;
  printf("Ente a number:");
  scanf("%d",&n);
  temp=n;
  while(n>0)
  {
    r=n%10;
    sum=sum*10+r;
    n=n/10;
  }
  printf("The Reverse of %d is %d",temp,sum);
  return 0;
}