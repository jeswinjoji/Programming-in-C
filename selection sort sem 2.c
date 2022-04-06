/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main()
{
   int i, j, count, temp, number[25];

   printf("enter the limit of the array: ");
   scanf("%d",&count);

   printf("Enter %d elements: ", count);
   for(i=0;i<count;i++)
      scanf("%d",&number[i]);
   for(i=0;i<count;i++)
   {
      for(j=i+1;j<count;j++)
      {
         if(number[i]>number[j])
         {
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }
   }

   printf("Sorted elements: ");
   for(i=0;i<count;i++)
   {
        printf(" %d",number[i]);
   }
   return 0;
}