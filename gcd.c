#include<stdio.h>
int main()
{
    int a,b,n,i,m;
    scanf("%d %d",&a,&b);
    for(i=1;i<=10;i++)
    {
        if((a%i==0)&&(b%i==0))
        m=i;
    }
    printf("%d",m);
    return 0;
}
