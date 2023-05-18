 #include<stdio.h>
#include <string.h>
void vowel(char x[])
{
int len=strlen(x);
int i=0;int j=len-1;
while(i<j)
{
while(!(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u'))
{
i++;
}
while(!(x[j]=='a'||x[j]=='e'||x[j]=='i'||x[j]=='o'||x[j]=='u'))
{
j--;
}
if(i<j)
{
char temp=x[i];
x[i]=x[j];
x[j]=temp;
}

for( i=0;x[i];i++)
{
printf("%c",x[i]);

}}}


int main()
{
char x[20];
gets(x);
vowel(x);

}
    