#include<stdio.h>
#include<stdlib.h>
#include<windows.h>//暂停 
#include "shopList.h"
void tradeAdd();
void tradeDrop();
void tradeUpdate();
void tradeFind();
void tradeOutput();
void tradeOut();

void tradeMenu()
{
	char num;
	
	for (;;)
	{
		system("cls");//清屏函数
		printf("\n\n\n\n\n\n\n");
		printf("                                                   ********************\n"); 
		printf("                                                   *   ->①添加商品   *\n");
		printf("                                                   *   ->②删除商品   *\n");
		printf("                                                   *   ->③修改商品   *\n");
		printf("                                                   *   ->④查找商品   *\n");
		printf("                                                   *   ->⑤显示商品   *\n");
		printf("                                                   *   ->〇返回登录   *\n");
		printf("                                                   ********************\n");
		num=getch();//不输出的读取一个数 
		switch(num)
		{
		case '1':tradeAdd();break;
		case '2':tradeDrop();break;
		case '3':tradeUpdate();break;
		case '4':tradeFind();break; 
		case '5':tradeOutput();break; 
		case '0':/*tradeOut();*/return;break;
		default:printf("输入有误请重新输入\n");system("pause");//暂停  "请按任意键继续" 
		}
	}
}
void tradeAdd()//增加
{
	system("cls");
	printf("添加商品\n");
	shopInputAdd();
	system("cls"); 
	printf("添加成功\n");
	shopShow(shopTail);
	system("pause"); 
} 
void tradeDrop()//删除
{
	char name[20];
	shopList L;
	system("cls");
	printf("请输入要删除商品的名称:\n");
	gets(name);
	L=shopFind(name);
	if(L!=NULL)
	{
		shopShow(L);
		shopDrop(L);
		printf("删除成功\n");
	}
	else
	{
		printf("没有该商品\n");
	}
	system("pause");
	
} 
void tradeUpdate()//修改
{
	char name[20];
	shopList L;
	system("cls");
	printf("请输入要修改商品的名称:\n");
	gets(name);
	L=shopFind(name);
	if(L!=NULL)
	{
		shopShow(L);
		shopInput(L);
	}
	else
	{
		printf("没有该商品\n");
	}
	system("pause");
	
}
 
void tradeFindName()
{
	char name[20];
	shopList L;
	system("cls");
	printf("请输入要查找商品的名称:\n");
	gets(name);
	L=shopFind(name);
	if(L!=NULL)
	{
		shopShow(L);
	}
	else
	{
		printf("没有该商品\n");
	}
	system("pause");
	
}
void tradeFindType()
{
	char type[20];
	system("cls");
	printf("请输入要查找商品的类型:\n");
	gets(type);
	if(shopFindOutput(type)!=1)
	{
		printf("没有该类型的商品\n");
	}
	system("pause");
}
void tradeFind()//查找
{
	char num;
	system("cls");
	printf("查找商品\n");
	printf("请选择查询方式:\n");
	printf("①按商品名称查询\n②按商品类型查询\n");
	num=getch();
	switch(num)
	{
		case '1':tradeFindName();break;
		case '2':tradeFindType();break;
	}
} 
void tradeOutput()//输出全部
{
	system("cls");
	shopOutput();
	system("pause"); 
} 
//void tradeOut()
//{} 
