#include<stdio.h>
int main(void)
{
	int i,k;
	int temp;
	int num[10];
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
	}
	for(k=0;k<10;k++)
	{
		for(i=9;i>k;i--)
		{
			if(num[i]>num[i-1])
			{
				temp=num[i];
				num[i]=num[i-1];
				num[i-1]=temp;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d  ",num[i]);
	}
	return 0;
}