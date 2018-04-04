#include<stdio.h>
#include<string.h>
int main(void)
{
	int N;
	char a[8000];
	int b,c,i;
	scanf("%d",&N);
	scanf("%s",&a);
	b=strlen(a);
	c=b/2;
	for(i=0;i<b;)
	{
		if(a[i]==a[N-i-1])
		{
			i++;
		}
		if(a[i]==a[N-i-1]&&b==N&&a[i]>=97&&a[i]<=122)
		{
			printf("Yes");
			break;
		}
		else
		{
			printf("No");
			break;
		}

		
	}
	return 0;
}