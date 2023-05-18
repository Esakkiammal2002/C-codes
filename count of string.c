 #include<stdio.h>
#include <string.h>
int count(char a[])
{
    int c=0;
    for(int i=0;a[i]!='\0';i++)
    {
        c++;
    }
    return c;
}



int main()
{
    char a[20];
    scanf("%s",a);
    int res=count(a);
    printf("%d",res);
    
    
    
    
    
    
}