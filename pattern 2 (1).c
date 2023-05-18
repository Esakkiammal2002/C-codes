 #include<stdio.h>

int main()
{
int n;
scanf("%d",&n);
int h=1;
int m=n;
for(int i=0;i<n;i++)
{
int k=h;
for(int j=0;j<m;j++)
{
printf("%d ",k);
k++;
}
printf("\n");
h++;
m--;
}
}

    