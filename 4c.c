#include <stdio.h>
int main()
{
    
    int *a,b,count=0;
    printf("Enter Starting Number and Ending Number : " );
    scanf("%d",&a);
    printf("Enter Ending Number : " );
    scanf("%d",&b);
    if(a>0 && b>0){
   for(int i=a;i<=b;i++)
   {
   if(*a%i==0)
   {
     count++;
   }
   }
   if(count==2){printf("%d\t",*a);}
   

    return 0;
}