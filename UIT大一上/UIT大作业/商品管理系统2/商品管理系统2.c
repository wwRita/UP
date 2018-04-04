#include<stdio.h>
#include<windows.h>//休眠函数
#include<conio.h>//暂停函数
#include<string.h>
#include<stdlib.h>//随机函数
#include<time.h>
#define M 20 
/*******************************************************************************/
typedef struct shangpin
{
	char name[10];
	double price;
	char type[5];
	struct shangpin *next;
}shop;
typedef struct yonghu
{
	char ming[M];
	char mima1[M];
	char mima2[M];
	char mima3[M];

}user;
/********************************************************************************/
int zhuCe()//注册验证成功！！！！！
{
	user *p;
	int rand1,rand2,rand3;
	p=(user*)malloc(sizeof(user));
	/*char ming[M];
	char mima1[M];
	char mima2[M];
	char mima3[M];*/

	srand(time(NULL));
	rand1=rand()%9000+1000;//产生随机4位验证码

	printf("请输入用户名:");
	scanf("%s",p->ming);
	printf("\n请输入密码:");
	scanf("%s",p->mima1);
	printf("\n请确认密码:");
	scanf("%s",p->mima2);
	if(!strcmp(p->mima1,p->mima2))
	{
		printf("\n验证码为:%d",rand1);
		printf("\n请输入验证码:");
		scanf("%d",&rand2);
		if(rand1!=rand2)
		{
			printf("验证码错误!请重新输入验证码:\n");
			scanf("%d",&rand3);
			if(rand3==rand1)
			{
				printf("注册成功!");
			}
		}
		else
		{
			printf("注册成功!");
		}
	}
	else
	{
		printf("密码错误!请重新输入密码:");
		scanf("%s",p->mima3);
		if(!strcmp(p->mima3,p->mima1))
		{
			printf("\n验证码为:%d",rand1);
			printf("\n请输入验证码:");
			scanf("%d",&rand2);
			if(rand1!=rand2)
			{
				printf("验证码错误!请重新输入验证码:\n");
				scanf("%d",&rand3);
				if(rand3==rand1)
				{
					printf("注册成功!");
				}
			}
			else
			{
				printf("注册成功!");
			}
		}
	}
	
	return 0;
}
/****************************************************************************/
int logOn()//登陆
{
	user* p;
	char username[M];
	char mima[M];
	printf("请输入用户名:");
	scanf("%s",username);
	printf("请输入密码:");
	scanf("%s",mima);
	if(strcmp(username,p->ming)==0&&strcmp(mima,p->mima1)==0)//有问题！！！！！
	{
		printf("登陆成功!");
	}
	else
	{
		printf("登陆失败!\n请检查用户名和密码是否正确!");
	}
	return 0;
}
/****************************************************************************/
int zeng(shop *head)//增
{
	shop *p;
	char ch;
	do
	{
		p=(shop*)malloc(sizeof(shop));
		printf("请输入商品名称:");
		scanf("%s",p->name);
		printf("请输入商品类别:");
		scanf("%s",p->type);
		printf("请输入商品价格:");
		scanf("%lf",&(p->price));
		p->next=head->next;
		head->next=p;
		printf("请问是否继续注册?(Y/N):");
		scanf("%c",&ch);
	}while(ch=='Y'||ch=='y');
	
	return 0;
}
/****************************************************************************/
int Print(shop* head)
{
	
}
/****************************************************************************/
int shan(shop *head)//删
{
	shop *p;//要删除的
	
	int i;
	p=(shop*)malloc(sizeof(shop));
	printf("请选择删除信息的方式:\n");
	printf("①按照商品名称删除\n②按照商品类别删除\n③按照商品价格删除\n");
	scanf("%d",&i);
	switch(i)
	{
		case 1:printf("请输入要删除的商品名称:");scanf("%s",p->name);
		case 2:printf("请输入要删除的商品类别:");scanf("%s",p->type);
		case 3:printf("请输入要删除的商品价格:");scanf("%lf",&(p->price));
	}
	p->next=NULL;
	free(p);
	
	return 0;
}
/***************************************************************************/
int cha(shop *head)//查   
{
	shop* p; 
	int method;
	char name[10];
	double price;
	char type[5];
	p=(shop*)malloc(sizeof(shop));
	printf("请选择查询方式:\n");
	printf("①按商品名称查询\n②按商品类型查询\n③按商品价格查询\n");
	scanf("%d",&method);
	switch(method)
	{
		case 1:	printf("请输入要查询的商品名称:");
				scanf("%s",name);
			   
				for(p=head;p!=NULL;p=p->next)
				{
					if(!strcmp(p->name,name))
					{
						printf("%s ",p->name);
						printf("%s ",p->type);
						printf("%f\n",p->price);

					}
					else
					{
						printf("您要查找的商品不存在!");
					}
				}
				break;
		case 2:	printf("请输入要查询的商品类别:");
				scanf("%s",type);
				for(p=head;p->next!=NULL;p=p->next)
				{
					if(!strcmp(p->type,type))
					{
						printf("%s ",p->name);
						printf("%s ",p->type);
						printf("%f\n",p->price);
					}
					else
					{
						printf("您要查找的商品不存在!");
					}
				}
				break;
		case 3:	printf("请输入要查询的商品价格:");
				scanf("%lf",&price);
				for(p=head;p->next!=NULL;p=p->next)
				{
					if(!strcmp(p->price,price))
					{
						printf("%s ",p->name);
						printf("%s ",p->type);
						printf("%f\n",p->price);
					}
					else
					{
						printf("您要查找的商品不存在!");
					}
				}
				break;
	}
	
	return 0;
}
/***************************************************************************/
int gai(shop* head)//改
{
	
	return 0;
}
/***************************************************************************/
int managermenu()
{
	printf("①增加商品\n②删除商品\n③查找商品\n④改动商品\n⑤退出");
}
int main()
{
	int num;
	int k;
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
	printf("************************************\n\n\n");
	Sleep(500);
	getch();//暂停 
	system("cls");
	printf("①注册\n②登陆\n③退出\n");
	scanf("%d",&num);
	switch(num)
	{
		case 1:zhuCe();break;
		case 2:logOn();
			   system("cls");
			   managermenu();
			   break;
		case 3:break;
		default:break;
	}
	scanf("%d",&k);
	switch(k)
	{
		case 1:zeng(head);break;
		case 2:shan(head);break;
		case 3:cha(head);break;
		case 4:gai(head);break;
		case 5:break;
		default:break;
	}
	return 0;
} 
//管理员界面  用户界面

