 #include<stdio.h>
int prime(int);
int primenumber(int);


 

int main()

{ 
int n;
scanf("%d",&n);
int res=prime(n);
printf("%d",res);
   
}
int prime(int n)
{
int sum=0;
while(n!=0)
{
int y=n%10;
int res=primenumber(y);
if(res==0){
sum=sum+y;}
n=n/10;
}
return sum;


}
int primenumber(int a)
{
int flag=0;
for(int i=2;i<a;i++)
{
if(a%i==0){
flag++;
break;}

}
return flag;
}




    