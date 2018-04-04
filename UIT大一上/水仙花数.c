#include<stdio.h>
int main(void)
{
	int n;
	int a;
	int b;
	int c;
	
	for(n=100;n<=999;n++)
	{
		a=n/100;
		b=n%100/10;
		c=n%10;
		if(a*a*a+b*b*b+c*c*c==n)
		{
			printf("%5d\n",n);
		}
	}
	
	return 0;
}