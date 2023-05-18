 #include<stdio.h>
int binarysearch(int a[],int,int);
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int key;
    scanf("%d",&key);
    int res=binarysearch(a,n,key);
    printf("%d",res);
}
int binarysearch(int a[],int n,int key)
{
    
    int l=0;
    int h=n-1;
  
    int index=-1;
    while(l<=h)
    { 
        int mid=(l+h)/2;
        if(key==a[mid]){
            index=mid;
            break;
         }
        else if(key>a[mid])
            l=mid+1;
        else
            h=mid-1;
          
    }
    return index;
         
              
}
   
    
