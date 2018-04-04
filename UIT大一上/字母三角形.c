#include<stdio.h>
int main(void)
{
	char n,cha='A';
	int a,b,c,i;
	scanf("%c",&n);
	for(i=1;i<=(int)n-64;i++)
	{ 
		
		for(a=1;a<=(int)n-64-i;a++)
		{
			printf("*");
		}
		for(b=1;b<=i;b++)
		{
			printf("%c",cha);
			cha++;
		}
		for(c=1,cha-=1;c<=i-1;c++)
		{
			cha--;
			printf("%c",cha);
		}
		printf("\n");
	}
	return 0;
}