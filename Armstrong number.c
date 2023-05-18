 #include<stdio.h>
int main()
{ 
   int n,sum=0,m,k,temp;
   
   scanf("%d",&n);
   temp=n;
   while(n!=0)
   {
        m=n%10;
        k=m*m*m;
        sum=sum+k;
        n=n/10;
   }
   if(temp==sum)
        printf("Armstrong number");
   else
        printf("not Armstrong number");
}




    