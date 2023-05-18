 #include<stdio.h>
int reverse(int);
int main()
{
   int n;
   scanf("%d",&n);
   int res=reverse(n);
   printf("%d",res);
}

int reverse(n){
   int sum=0;
   while(n!=0)
   {  
      
      int m=n%10;
      sum=(sum*10)+m;
      
      n=n/10;
       
   }
   return sum;

}

    