#include <stdio.h>
int main(){
    float l,b;
    printf("Enter the length of rectangle : ");
    scanf("%f",&l);
    printf("Enter the breadth of rectangle : ");
    scanf("%f",&b);
    printf("perimeter of Rectangle is :%.2f",2*(l+b));
    return 0;
}