#include<stdio.h>
int factorial(int n)
{
	int fact=1;
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
int main()
{
	int n;
	scanf("%d",&n);
	int r;
	scanf("%d",&r);
	int fact=factorial(n);
	int k=n-r;
	int sub_fact=factorial(k);
	int comp=factorial(r);
	int res=fact/(sub_fact*comp);
	printf("%d",res);
}