#include<stdio.h>
int main()
{
  int ch,n,i,fact=1,count=0;
  while(ch!=4)
  {
    printf("\n***Menu***\n");
    printf("1.Factorial of a number\n2.Prime or not\n3.Odd or Even\n4.Exit\n");
    printf("Enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
      printf("FACTORIAL OF A NUMBER\n");
      printf("Enter a number:");
      scanf("%d",&n);
      for(i=n;i>0;i--)
      {
        fact=fact*i;
      }
      printf("Factorial of %d is %d",n,fact);
      break;
      case 2:
      printf("PRIME OR NOT\n");
      printf("Enter a number:");
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
        if(n%i==0)
        count++;
      }
      if(count==2)
        printf("%d is a prime number",n);
      else
        printf("%d is not a prime number",n);
        break;
      case 3:
      printf("ODD OR EVEN\n");
      printf("Enter a number:");
      scanf("%d",&n);
      if(n%2==0)
        printf("%d is an even number",n);
      else
        printf("%d is an odd number",n);
      break;
        case 4:
          printf("Exit");
          break;
    }
  }
  return 0;
}