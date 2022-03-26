/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
void binarysearch();
int a[20],n;
int main()
{
    binarysearch();
    return 0;
}
void binarysearch()
{
    int i,item,beg,end,mid,pos=-1;
    printf("Enter limit of the array:");
    scanf("%d",&n);
    printf("Enter the Elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nArray\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
        printf("\nEnter the element to be search");
        scanf("%d",&item);
        beg=0;
        end=n-1;
        while(beg<=end)
        {
            mid=(beg+end)/2;
            if(a[mid]==item)
            {
                pos=mid;
                printf("Successfull search....%d found at location %d",item,pos+1);
                break;
            }
            else if(a[mid]>item)
            end = mid-1;
            else
               beg=mid+1;
               
        }
        if(pos==-1)
        printf("Unsuccessfull search!!value is not present in the array");
        
    
    
}