 #include<stdio.h>
int maximum(int a[],int n)
{
    int m=a[0];
    for(int i=1;i<n;i++)
    {  
       int k=a[i];
       if(k>a[m])
       {
         m=k;
       }
    }
    return m;
}

void hashingprocess(int a[],int n,int b[])
{
    for(int i=0;i<n;i++)
    {
         int k=a[i];
         b[k]++;
    }
}
int result(int b[],int r)

{
    int count=0;
    for(int i=0;i<r;i++)
    {  
          if(b[i]==1)
            count++;
        
         
    }
    return count;
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
    int max=maximum(a,n);
    int b[n];
    for(int i=0;i<max+1;i++)
    {
        b[i]=0;
    }
    hashingprocess(a,n,b);
    int res=result(b,max+1);
    printf("%d",res);
}