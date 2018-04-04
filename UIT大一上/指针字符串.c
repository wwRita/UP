#include<stdio.h>
int main(void)
{
	char a[10];
	int n,i;
	char *q=&a[0];

	gets(a);
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		if((i+1)==n)
		{
			printf("%s\n",q+i);
		}
	}
	
	
	return 0;
}

/*
#include<stdio.h>
int main(void)
{
	char a[10];
	int n,i;
	char *q=&a[0];
	gets(a);
	scanf("%d",&n);
	q=&a[n];
	printf("%s",q);
	return 0;
}