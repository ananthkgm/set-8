#include <stdio.h>
int main()
{
	char a[100];
	int i,flag=0;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	 if(a[i]=='a' || a[i]=='e' ||a[i]=='i' ||a[i]=='o' || a[i]=='u')
	  flag++;
	  if(flag>0)
	  {
	  printf("yes");
	  }
	  else
	  {
	  printf("no");
	  }
	return 0;
}
