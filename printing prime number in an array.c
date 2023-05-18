 #include<stdio.h>
void isPrime(int k)
{
int flag=0;
for(int i=2;i<k;i++)
{
if(k==2)
printf("%d",k);
else
{
if(k%i==0)
{
flag++;
break;
}
}
}
if(flag==0)
printf("%d",k);
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
for(int i=0;i<n;i++)
{
int k=a[i];
isPrime(k);
}
}