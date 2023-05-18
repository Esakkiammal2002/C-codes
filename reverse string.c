 #include<stdio.h>
#include <string.h>
void reverse(char a[])
{
     int len=count(a);
     int i=0,j=len-1;
     while(i<j)
    {
        char temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        
        
    }
    printf("%s",a[i]);
    
}
int count(char x[])
{    int c=0;
    for(int i=0;x[i]!='\0';i++)
    {
       c++;
       
        
        
    }
    return c;
}

            


  

int main()
{
    char x[20];
    scanf("%s",x);
    return(x);
    
}