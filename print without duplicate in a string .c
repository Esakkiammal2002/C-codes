 #include<stdio.h>
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
        char k=x[i];
        b[k]++;
    }
   
     for(int i=0;x[i];i++)
     {
        char s=x[i];
        if(b[s]!=0)
        {
        printf("%c",s);
        }
        b[s]=0;   
     }
   
   
}