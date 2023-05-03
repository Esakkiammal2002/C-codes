 #include<stdio.h>
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    int sq=n*n;
    int flag=0;
    while(n!=0)
    {  
       
       if(n%10==sq%10){
            flag++;
       }
       n=n/10;
    }
    if(flag==0)
        printf("not automorphic number");
    else 
        printf("automorphic number");
}