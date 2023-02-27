#include <stdio.h>
int main(){
    int a,b;
    int *c,*d;
    printf("Enter First Number : ");
    scanf("%d",&a);
    c=&a;
    printf("Enter second Number : ");
    scanf("%d",&b);
    d=&b;
    if(c>d){printf("%d",*d);}   //max of two number using pointer
    else {printf("%d",*c);}
    printf("\nend");

}