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
int sum=0;
for(int i=1;i<n;i++)
{
if(a[0]>a[i])
{
int k=a[0]-a[i];
sum=sum+k;
}
}
printf("%d",sum);
}