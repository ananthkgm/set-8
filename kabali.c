#include <stdio.h>
int main()
{
 int a1,a2,i;
 for(i=0;i<3;i++)
 {
 scanf("%d %d",&a1,&a2);
  if(a1>a2)
  {
   printf("%d\n",a1-a2);
  }
   else
   {
   printf("%d\n",a2-a1);
   } 
       
   }
  return 0;
}

