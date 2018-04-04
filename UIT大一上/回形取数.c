#include<stdio.h>
int main(void)
{
	int m,n;//ÐÐ ÁÐ
	int i,j,a;
	int table[20][20];
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&table[i][j]);
		}
	}
	i=0;
	j=0;
	for(a=1;a<n/2+2;a++)
	{
		for(i;i<m-a+1;)
		{
			printf("%d ",table[i][j]);
			i++;
		}
		for(j;j<n-a+1;)
		{
			j++;
			printf("%d ",table[m-a-i][j]);
			
		}
		for(i=m-a;i>0;i--)
		{
			printf("%d ",table[i][n-1]);
		}
		for(j=n-a;j>0;j--)
		{
			printf("%d ",table[0][j]);
		}
		i++;
		j++;
		
	}
	return 0;
}