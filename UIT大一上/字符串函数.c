#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[20];
	char b[20];	
	printf("Enter a string:\n");
	scanf("%s",a);
	printf("Enter a string:\n");
	scanf("%s",b);
	
	if(strcmp(a,b)==1)
	{
		printf("�����ַ����Ĵ�СΪ:a>b\n");
	}
	else if(strcmp(a,b)==0)			
	{
		printf("�����ַ����Ĵ�СΪ:a=b\n");
	}
	else if(strcmp(a,b)==-1)
	{
		printf("�����ַ����Ĵ�СΪ:a<b\n");
	}
	printf("The one string's length is:%d\n",strlen(a));
	printf("The two string's length is:%d\n",strlen(b));
	
	printf("�´�Ϊ:%s\n",strcat(a,b));
	printf("�´�Ϊ:%s\n",strcpy(a,b));
	
	
	return 0;
}