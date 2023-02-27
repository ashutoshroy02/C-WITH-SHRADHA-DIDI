#include <stdio.h>
int main()
{
int n,x,count=0;
printf("Enter the value of n : ");
scanf("%d",&n);
printf("Enter Numbers : ");
int arr[n];
for(int i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
}
printf("Enter the Value of x : ");
scanf("%d",&x);
for(int i=0;i<n;i++)
{
if(arr[i]==x)
{count++;}
}
printf("\n%d comes %d times in this array. ",x,count);
}
