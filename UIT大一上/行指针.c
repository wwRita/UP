#include<stdio.h>
int main(void)
{
	int num[2][3];
	int (*p)[3]=num;
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&num[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==0&&j==0||i==1&&j==0||i==1&&j==2)
			{
				printf("%d ",(*(p+i)+j));
			}
			
		}
		
	}
	return 0;
}

	