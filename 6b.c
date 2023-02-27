#include <stdio.h>
int main(){
    int n;
    printf("Enter the no. of Elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Elements of the Array. \n");
    for(int i=1;i<=n;i++)
    {scanf("%d",&arr[i]);}

    for(int i=n;i>=1;i--)
    {printf("%d\t",arr[i]);}
}