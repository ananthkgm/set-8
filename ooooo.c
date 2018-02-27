#include <stdio.h>
int main() 
{	
   int n1,n2,i;
   char a;
   for(i=0;i<4;i++)
   {
       scanf("%d %c %d",&n1,&a,&n2);
       if(i%2==0)
       {
           printf("%d\n",(n1/n2));
       }
       else
       {
           printf("%d\n",(n1%n2));
       }
   }
	return 0;
}
