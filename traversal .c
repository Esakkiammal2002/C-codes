 #include<stdio.h>
int display(int b[],int n)

{
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",b[i]);
    }

    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    display (a,n);
}
    
  