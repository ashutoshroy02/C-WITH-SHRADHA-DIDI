#include <stdio.h>
int main(){
  int num;
  printf("Enter a number : ");
  scanf("%d",&num);
  if(num>=1){printf("%d is a Natural Number.\n",num);}
  else printf("%d is not a Natural Number.\n ",num);
    return 0;
}