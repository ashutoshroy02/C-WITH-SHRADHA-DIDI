#include <stdio.h>
#include <math.h>

int main()
{
int n,ans,count=0;
printf("Enter the value of n : ");
scanf("%d",&n);
printf("Enter Numbers : ");
int arr[n];
for(int i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++)
{
 ans = max(arr[i+1],arr[i]);   //1 and 0 // 2 and 1 // 3 and 2 // and 
}
printf("%d",ans);

}


//hard question not able to do... do somrtime later...✌️