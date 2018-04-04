#include<stdio.h>
int main(void)
{
	int num[10];
	int min;
	int max;
	int i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
	}
	max=min=num[0];

	for(i=1;i<10;i++)
	{
		if(min>num[i])
		{
			min=num[i];
		}
		else if(max<num[i])
		{
			max=num[i];
		}
	}
	printf("The max number is:%d\n",max);
	printf("The min number is:%d\n",min);

	return 0;
}