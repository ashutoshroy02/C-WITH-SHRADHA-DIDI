#include <stdio.h>
int main(){
    
     char alpha[]={'a','t','y'};
      for(int i=0;i<3;i++)
      {
        if(alpha[i]=="97"||alpha[i]=="101",alpha[i]=="105"||alpha[i]=="111"||alpha[i]=="117")
        {// if("%d",alpha[i]<97)
        // {
        //   int e[i] = "%d",alpha[i]=alpha[i]-32;
        // }
        int x[3];
        x[i] = (int)(alpha[i]);
        int y[3];
        y[i]=x[i]-32;
        printf("%c\n",y[i]);
      }

      // else
      // {  int x[3];
      //   x[i] = (int)(alpha[i]);
      //   int y[3];
      //   y[i]=x[i]-32;
      //   printf("%c\n",y[i]);}    
      
      }
    return 0;
}