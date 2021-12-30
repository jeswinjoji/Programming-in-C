#include<stdio.h>
int main()
{
  int n,r,sum=0,temp,c;
  printf("Enter a number:");
  scanf("%d",&n);
  temp=n;
  while(n>0)
  {
    r=n%10;
    c=r*r*r;
    sum=sum+c;
    n=n/10;
  }
  if(sum==temp)
  printf("%d is a Armstrong Number",temp);
  else
  printf("%d is not a Armstrong Number",temp);
  return 0;
}