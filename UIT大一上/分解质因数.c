#include<stdio.h>
int main(void)
{
	int n;
	int i;

	scanf("%d",&n);
	printf("%d=",n);
	for(i=2;i<=n;)
	{
		if(n%i==0)
		{
			printf("%d*",i);
			n/=i;
		}
		else
		{
			i++;
		}
	}
	printf("\b ");
	return 0;
}


