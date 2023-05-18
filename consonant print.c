 #include<stdio.h>
#include <string.h>
void count(char a[])
{
    int c=0;int v=0;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u'&&a[i]!='A'&&a[i]!='E'&&a[i]!='I'&&a[i]!='O'&&a[i]!='U')
           
        printf("%c",a[i]);
            
        
    }
    
    
    


}



int main()
{
    char a[20];
    scanf("%s",a);
    
    count(a);
    
    
    
    
    
    
    
}