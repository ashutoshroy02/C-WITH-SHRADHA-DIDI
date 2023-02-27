#include <stdio.h>
void temp(float t);
float t;
int main()
{
printf("Enter Temp. : ");
scanf("%f",&t);
temp(t);
}
void temp(float t){
    if(t<=15){printf("COLD\n");}
    else {printf("HOT\n");}
}
