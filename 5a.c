#include <stdio.h>
int main()
{
    int n,sum=0;
     printf("Enter any Number : ");
     scanf("%d",&n);
     int e=n;   //staring number
    while(n>=1)
    {
       int c = n%10;   //variable to store last digit of number.
       sum+=c;       //variable to store the sum of digits in every loop.
       n/=10;       //changed value of n after every loop.
    }
    printf("The sum of digits of %d is %d",e,sum);
    return 0;
}