 #include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    int index=0;
    for(int i=1;i<n;i++)
    {
        int k=a[i];
       
        if(k>max)
              max=k;
              index=i;
     }       
     printf("%d %d",index,max);
}
    
  