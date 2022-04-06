/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
void main()
{
    int a[10][10],n,m,i,j;
    printf("Enter number of rows and number of columns: ");
    scanf("%d%d",&n,&m);
    printf("Enter thr elements:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
    {
        scanf("%d",&a[i][j]);
    }
    }
    printf("Matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}