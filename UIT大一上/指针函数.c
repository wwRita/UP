#include<stdio.h>
#define N 5
int *Max(int a[]);
int main(void)
{
	int a[N];
	int i;
	int *p;
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	p=Max(a);
	printf("%d",*p);
	return 0;
}
int *Max(int a[])
{
	int i;
	int *q;
	q=a;
	for(i=0;i<N;i++)
	{
		if(*q<a[i])
		{
			q=&a[i];
		}
	}
	return q;//·µ»ØµØÖ·
}