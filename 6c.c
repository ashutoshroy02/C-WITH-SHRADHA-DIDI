#include <stdio.h>
int main()
{
   char alpha[26]="abcdefghijklmnopqrstuvwxyz";

   char *c=&
   alpha;

   for(int j=1,i=0;i<=25,j<=26;i++,j++){printf("%d-->%c \n",j,*(c+i));}


    

    printf("\n   end");

}
