#include<stdio.h>
#include<string.h>
#define N 20

int main(void)
{
	char a[N];
	int i,j=1;
	printf("Please enter a string:\n");
	gets(a);
	printf("%d���ַ���",strlen(a));
	for(i=0;i<N;i++)
	{
		if(a[i]==' ')
		{
			j++;
		}
	}
	printf("%d������",j);
	
	return 0;
}