#include<stdio.h>
#define N 5
int Max(int*,int);
int main(void)
{
	int a[N];
	int i;
	int (*p)(int*,int);//Ö¸Ïòº¯Êı
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	p=Max;
	Max(a,N);
	return 0;
}
int Max(int *a,int n)
{
	int i;
	int max=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}	
	}
	printf("%d",max);
	return max;
}