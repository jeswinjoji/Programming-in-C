#include<stdio.h> 
 int main(void) 
 { 
int arr[10],i,item,n; 
 printf("enter the limit:"); 
 scanf("%d",&n); 
 printf(" enter the elements:"); 
 for(i=0;i<n;i++) 
 { 
 scanf("%d",&arr[i]); 
 } 
 printf("enter the elements to be searched: "); 
 scanf("%d",&item); 
 for(i=0;i<n;i++) 
 { 
 if(arr[i]==item) 
 { 
 printf("%d found at location %d " ,item,i+1); 
 break; 
 } 
 } 
 if​(i==n) 
 { 
 printf("%d is not found,unsuccessfull search",item); 
 } 
 return 0; 
 }