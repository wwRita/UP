#include<stdio.h>
#include<windows.h>//休眠函数
#include<conio.h>//暂停函数
#include<string.h>
#include<stdlib.h>//随机函数
#include<time.h>
#define M 10 
typedef struct shangpin
{
	char name[10];
	double price;
	char type[5];
	struct shangpin *next;
}shop;
int zhuCe()//注册
{
	int rand1,rand2,rand3;
	char ming[M];
	char mima1[M];
	char mima2[M];
	char mima3[M];
	srand(time(NULL));
	rand1=rand()%9000+1000;
	printf("请输入用户名:");
	scanf("%s",ming);
	printf("\n请输入密码:");
	scanf("%s",mima1);
	printf("\n请确认密码:");
	scanf("%s",mima2);
	if(!strcmp(mima1,mima2))
	{
		printf("\n验证码为:%d",rand1);
		printf("\n请输入验证码:");
		scanf("%d",&rand2);
		if(rand1!=rand2)
		{
			printf("验证码错误!请重新输入验证码:\n");
			scanf("%d",&rand3);
		}
		else
		{
			printf("注册成功!");
		}
	}
	else
	{
		printf("密码错误!请重新输入密码:");
		scanf("%s",mima3);
	}
	printf("\n验证码为:%d",rand1);
	printf("\n请输入验证码:");
	scanf("%d",&rand2);
	if(rand1!=rand2)
	{
		printf("验证码错误!请重新输入验证码:\n");
		scanf("%d",&rand3);
	}
	else
	{
		printf("注册成功!");
	}
	return 0;
}
/*int logOn()//登陆
{
	char username[M];
	char mima[M];
	printf("请输入用户名:");
	gets(username);
	printf("请输入密码:");
	gets(mima);
	if(!strcmp(username,ming)&&!strcmp(mima,mima1))
	{
		printf("登陆成功!");
	}
	else
	{
		printf("登陆失败!\n请检查用户名和密码是否正确!");
	}
	return 0;
}
/*int zeng(shop *head)//增
{
	shop *p;
	p=(shop*)malloc(sizeof(shop));
	printf("请输入商品名称:");
	scanf("%s",p->name);
	printf("请输入商品类别:");
	scanf("%s",p->type);
	printf("请输入商品价格:");
	scanf("%lf",&price);
	p->next=head->next;
	head->next=p;
	return 0;
}
int shan(shop *head)//删
{
	shop *p;
	int i;
	p=(shop*)malloc(sizeof(shop));
	printf("请选择删除信息的方式:\n");
	printf("①按照商品名称删除\n②按照商品类别删除\n");
	scanf("%d",&i);
	switch(i)
	{
		case 1:printf("请输入要删除的商品名称:");

	}
	return 0;
}
int cha(shop *head)//查
{

	return 0;
}*/
int main()
{
	int num;
	int i;
	shop *head;
	head=(shop*)malloc(sizeof(shop));
	head->next=NULL;

	system("color B");
	printf("************************************\n");
	Sleep(500);
	printf("*                                  *\n");
	Sleep(500);
	printf("*                                  *\n");
	Sleep(500);
	printf("*       欢迎使用商品管理系统       *\n");
	Sleep(500);
	printf("*                                  *\n");
	Sleep(500);
	printf("*                                  *\n");
	Sleep(500);
	printf("************************************\n\n\n\n");
	Sleep(500);
	getch();//暂停函数 
	printf("①注册\n③退出\n");
	scanf("%d",&num);
	switch(num)
	{
		case 1:zhuCe();break;
		//case 2:logOn();break;
		case 3:break;
	}
	/*for(i=1;;i++)
	{
		printf("请输入第%d个商品信息:",i);
		zeng(head);
	}*/
	return 0;
} 
//管理员界面  用户界面
