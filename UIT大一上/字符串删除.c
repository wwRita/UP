#include<stdio.h>
int main(void)
{
	char a[10];
	char cha;
	char *p;
	printf("ÇëÊäÈë×Ö·û´®:");
	gets(a);
	printf("ÇëÊäÈëÒªÉ¾³ıµÄ×Ö·û:");
	scanf("%c",&cha);
	for(p=a;*p!='\0';p++)
	{
		if(*p==cha)
		{
			*p++;
			printf("%c",*p);
		}	
		else
		{
			printf("%c",*p);
		}
	}

	

	return 0;
}
