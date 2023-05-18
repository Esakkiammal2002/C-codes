 #include<stdio.h>
#include <string.h>
int count(char x[])
{
   int count=0;
   for(int i=0;x[i];i++)
   {
      if(x[i]>='0'&&x[i]<='9')
      {
          count++;
          printf("%c",x[i]);
      }
         
   }
   return 0;
}

int main()
{
    char x[20];
    scanf("%s",x);
    int res=count(x);
    
    
}