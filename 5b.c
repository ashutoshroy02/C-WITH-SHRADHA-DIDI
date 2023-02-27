#include <stdio.h>
#include <math.h>
float sqr(int num);
int num;
int main()
{
  printf("Square root is %.2f",sqr(num));
  return 0;
}
float sqr(int num)
{
  printf("Enter a number : ");
  scanf("%d",&num);
 float d = pow(num,0.5);
  return d;
}

