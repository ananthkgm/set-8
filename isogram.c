
#include <stdio.h>
int main() 
{
	char a[20];
	int i,c,j,count=0;
	scanf("%s",a);
	c=strlen(a);
	for(i=0;i<c;i++)
	{
		for(j=i+1;j<=c;j++)
		{
	if(a[i]==a[j])
	{
	count++;
	}
  }
	}
	if(count==0)
	{
	printf("yes it is isogram");
	}
	else
	{
	printf("not a isogram");
	}
	return 0;
}
