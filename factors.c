#include <stdio.h>
int main()
{
    int i,num;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("All factors of %d are: \n",num);
    for(i=1; i<=num; i++)
    {
        if(num%i==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
