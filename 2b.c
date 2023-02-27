#include <stdio.h>
int main(){
   int a;
   printf("Enter something : ");
   scanf("%d",&a);
   if(a==0||a==1||a==2||a==3||a==4||a==5||a==6||a==7||a==8||a==9)
   printf("Entered character is Digit \n");
   else 
   printf("Not a Digit ");
    return 0;
}