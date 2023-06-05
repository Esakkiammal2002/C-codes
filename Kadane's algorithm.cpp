#include<stdio.h>
int maximum(int a[],int n)
{
	int m=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]>m)
		{
			m=a[i];
		}
	}
	return m;
}
int maxSubArray(int a[],int n,int max)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];
		if(sum>max)
		{
			max=sum;
		}
		if(sum<0)
		{
			sum=0;
		}
	}
	return max;
	
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
	int res=maxSubArray(a,n,max);
	printf("%d",res);
	
}