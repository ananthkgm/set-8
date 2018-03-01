#include<stdio.h>
int main()
{
int n,n1,l;
scanf("%d",&n);
while(n!=0)
{
n1=n%10;
l=n1;
printf("%d",l);
n=n/10;
}
return 0;
}
