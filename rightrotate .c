 #include<stdio.h>
void rightrotate(int a[],int,int);

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
    rightrotate(a,n,k);
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    
}
void rightrotate(int b[],int n,int k)   
{
    while(k!=0)
    {
        int temp=b[0];
        for(int i=1;i<n;i++)
        {
             b[i-1]=b[i];
        }
        b[n-1]=temp;
        k--;
    }
    
            
}

   
    
