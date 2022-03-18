/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void create();
int main()
{
    create();
    return 0;
}
void create()
{
    int arr[50],i=0,n;
    printf("enter the size of the array-");
    scanf("%d",&n);
    printf("enter the array elements-");
    for(i=0;i<n;i++)
    {
     scanf("%d",&arr[i]);   
    }
    printf("the array elements are:");
    for(i=0;i<n;i++)
    {
        scanf("%d\t",&arr[i]);
    }
    
}