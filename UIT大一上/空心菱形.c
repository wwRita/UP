//空心三角形 10月13日 空心菱形
#include<stdio.h>
int main(void)
{
	int n;
	int i;
	int a;//空格
	int b;//*
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
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
	for(i=n-n/2;i>=1;i--)
	{
		for(a=1;a<=n-i;a++)
		{
			printf(" ");
		}
		for(b=1;b<=2*i-1;b++)
		{
		
			if(b==1||b==2*i-1)
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