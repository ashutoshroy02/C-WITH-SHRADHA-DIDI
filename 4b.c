//If a number is Prime or not...

#include <stdio.h>
int main(){
   int *num,count=0;
   printf("Enter a number :  ");
   scanf("%d",*num);
   if(num>0){
   for(int i=1;i<=*num;i++)
   {
   if(*num%i==0)
   {
     count++;
   }
   }
   if(count==2){printf("Its a prime Number. ");}
   else {printf("Not a Prime Number. ");}
   }
   else {printf("Only Postive Number is Allowed.");}
   
    return 0;
}