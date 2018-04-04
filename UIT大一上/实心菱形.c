#include<stdio.h>
int main(void)
{
	int n;
	int i;
	int a;
	int b;
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{
		for(a=1;a<=n-i;a++)
		{
			printf(" ");
		}
		for(b=1;b<=i;b++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=n-n/2;i>=1;i--)
	{
		for(a=1;a<=n-i;a++)
		{
			printf(" ");
		}
		for(b=1;b<=i;b++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
 
