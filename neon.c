 #include<stdio.h>
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    int temp=n;
    int sq=n*n;
    int sum=0;
    
    while(sq!=0)
    {
        
        int y=sq%10;
        sum=sum+y;
        sq=sq/10;
        
    }
    n=temp;
    if(sum==n)
         printf("Neon number");
    else
         printf("not neon number");
}