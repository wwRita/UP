#include<stdio.h>
int main(void)
{
	int num[6];
	int i;
	int j;
	int temp;
	
	printf("Please enter six numbers: ");
	for(i=0;i<6;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0,j=5;i<j;i++,j--)
	{
		temp=num[i];
		num[i]=num[j];
		num[j]=temp;
	}
	for(i=0;i<6;i++)
	{
		printf("%2d",num[i]);
	}


	
	return 0;
}
