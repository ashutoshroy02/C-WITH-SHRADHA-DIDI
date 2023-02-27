#include <stdio.h>
int main(){
  int a,b;
  printf("Enter two numbers : ");
  scanf("%d %d",&a,&b);
  if(a>b)
  printf("%d is the Smallest Number. \n",b);
  else 
  printf("%d is the Smallest Number. \n",a);
    return 0;
}