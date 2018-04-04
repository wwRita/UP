/*#include<stdio.h>
int main(void)
{
	int a[5];
	int *p;
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		p=&a[i];
		printf("%d",*p);
	}
	return 0;
}
==================================30*/
#include<stdio.h>
int main(void)
{
	int a[5];
	int *p;
	for(p=a;p<a+5;p++)//a=0
	{
		scanf("%d",p);
	}
	for(p=a;p<a+5;p++)
	{
		printf("%d",*p);
	}
	return 0;
}