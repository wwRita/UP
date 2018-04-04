#include<stdio.h>
int main(void)
{
	char a[20];
	char b[20];
	int i;
	printf("Please enter the first string:\n");
	gets(a);
	printf("Please enter the second string:\n");
	gets(b);
	for(i=1;i<20;i++)
	{
		if(a[i]>b[i])
		{
			printf("a>b");
			break;
		}
		else if(a[i]<b[i])
		{
			printf("a<b");
			break;
		}
		if(i==19)
		{
			printf("a=b");
		}
		
	}
	return 0;
}