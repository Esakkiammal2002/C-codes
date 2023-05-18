#include<stdio.h>
int maximum(int a[],int n)
{
int max=a[0];
for(int i=1;i<n;i++)
{
if(a[i]>max)
max=a[i];
}
return max;
}
void hashing(int a[],int n,int b[])
{
for(int i=0;i<n;i++)
{
int k=a[i];
b[k]++;
}
}
int minimum(int a[],int n)
{
int min=a[0];
for(int i=1;i<n;i++)
{
if(a[i]<min)
min=a[i];
}
return min;
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
int m=maximum(a,n);
int b[m+1];
for(int i=0;i<m+1;i++)
{
b[i]=0;
}
hashing(a,n,b);
int i=0;
int j=n-1;
while(i<j)
{
int maxelt=maximum(a,n);
int minelt=minimum(a,n);
if(b[maxelt]!=0)
{
printf("%d",maxelt);
}
if(b[minelt]!=0)
{
printf("%d",minelt);
}
b[maxelt]=0;b[minelt]=0;
a[i]=a[i+1];a[j]=a[j-1];
i++;j--;
}
}