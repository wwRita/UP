#include<stdio.h>
void swap(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
int mian()
{
	int a,b;
	int *p=&a;
	int *q=&b;
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("%d %d\n",a,b);
	return 0;
}