#include<stdio.h>
int main()
{
	
	int n;
	scanf("%d",&n);
	int s;
	scanf("%d",&s);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	for(int i=0;i<n;i++)
	{
		int sum=0;
		for(int j=i+1;j<n;j++)
		{
			sum=sum+a[i]+a[j];
			a[i]=0;
			if(sum==s)
			{
				printf("%d %d",i+1,j+1);
				break;
			}
		}
		if(sum==s)
		{
			
			break;
		}
	}
}