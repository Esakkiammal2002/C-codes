 #include<stdio.h>
#include <string.h>
int main()
{
    char x[40];
    scanf("%[^\n]s",x);
   int b[123];
    for(int i=0;i<123;i++)
    {
        b[i]=0;
    }
    for(int i=0;x[i];i++)
    {
        int k=x[i];
        b[k]++;
    }
    
   int max=b[0];
    int index=-1;
       for(int i=1;i<123;i++)
       {
       if(max<b[i])
       {
           max=b[i];
           
       }
   }
   
   
   
  int first=max;int second =0;
  
  for(int i=0;i<123;i++) 
  {
    while(b[i]!=0)
    {
       if(b[i]<first && b[i]>second)
       {
          second=b[i];
           index=i;
       }
    }
  }
   printf("%c",index);

}