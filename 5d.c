#include <stdio.h>
float x,n;
float d=1;
int powd(float x,float n){
    printf("Enter the Base : ");
    scanf("%f",&x);
    printf("Enter the Power : ");
    scanf("%f",&n);               //x^n= x*x*x*x*x...... n times.
    for(int i=1;i<=n;i++){
        d = d*x;
    }
    printf("%.2f",d);

}


int main(){ powd(x,n);}