#include<stdio.h>
int main(void)
{
	int n;
	int i;
	int k;
	int a;
	int b;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=n;k++)
		{
			for(a=1;a<=i-1;a++)
			{
				printf(" ");
			}
			for(b=1;b<=(n-i)*2+1;b++)
			{
				printf("*");
			}	
			for(a=1;a<=i;a++)
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}

