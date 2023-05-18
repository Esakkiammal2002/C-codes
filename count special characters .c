 #include<stdio.h>
#include <string.h>

int count(char x[])
{    int c=0;
    for(int i=0;x[i]!='\0';i++)
    {
       if(!(x[i]>='a'&&x[i]<='z')||(x[i]>='A'&&x[i]<='Z'))
    c++;}
    
    return c;
}
int main()
{
    char x[20];
    scanf("%s",x);
    int res=count(x);
    printf("%d",res);
    
}