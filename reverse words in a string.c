 #include<stdio.h>
#include<string.h>
int main()
{
char x[20];
scanf("%[^\n]s",x);
int len=strlen(x);
int count=0;
for(int i=len-1;i>=0;i--)
{
  if(x[i]!=' ')
  {
    count++;
  }
  else
  {
    for(int j=i+1;j<=i+count;j++)
    {
      printf("%c",x[j]);
    }
    count=0;
    printf(" ");
  }
  
}
for(int i=0;x[i];i++)
{
  if(x[i]!=' ')
      printf("%c",x[i]);
  else
  {
      break;
  }
}
}