//空心三角形 10月13日
#include<stdio.h>
int main(void)
{
	int n;
	int i;
	int a;
	int b;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(a=1;a<=n-i;a++)
		{
			printf(" ");
		}
		for(b=1;b<=2*i-1;b++)
		{
			if(i==1||i==n)
			{
				printf("*");
			}
			else if(b==1||b==2*i-1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	return 0;
}