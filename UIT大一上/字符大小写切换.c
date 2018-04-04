#include<stdio.h>
int main(void)
{
	char n;
	scanf("%c",&n);
	if(n>=65&&n<=90)
	{
		n+=32;
		printf("%c",n);
	}
	else if(n>=97&&n<=122)
	{
		n-=32;
		printf("%c",n);
	}
	else
	{
		printf("error");
	}
	return 0;
}