 #include<stdio.h>
void leftrotate(int a[],int,int);

int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k;
    printf("enter no of rotation");
    scanf("%d",&k);
    leftrotate(a,n,k);
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    
}
void leftrotate(int b[],int n,int k)   
{
    while(k!=0)
    {
        int temp=b[n-1];
        for(int i=n-1;i>0;i--)
        {
             b[i]=b[i-1];
        }
        b[0]=temp;
        k--;
    }
    
            
}

   
    
