/*#include<stdlib.h>
#include<windows.h>//暂停 
#include "buyerLogList.h"
#include"buyerTradeMenu.h" 
void logOn();//登录 
void logIn();//注册 
void logMenu()
{
	char num;
	
	for (;;)
	{
		system("cls");//清屏函数
		printf("\n\n\n\n\n\n\n");
		printf("                                                   ****************\n"); 
		printf("                                                   *   ->①登陆   *\n");
		printf("                                                   *   ->②注册   *\n");
		printf("                                                   *   ->〇退出   *\n");
		printf("                                                   ****************\n");
		num=getch();//不输出的读取一个数 
		switch(num)
		{
		case '1':logOn();break;
		case '2':logIn();break;
		case '0':return;break;
		default:printf("输入有误请重新输入\n");system("pause");//暂停  "请按任意键继续" 
		}
	}
}
void LogOn()
{
	buyerNode N;
	system("cls");
	printf("请登陆\n");
	buyerInput(&N); 
	if(buyerFind(N)==1)
	{
		printf("匹配成功 即将登录\n");
		system("pause");
		buyerTradeMenu();
	} 
	else
	{
		printf("匹配失败 即将返回上一层\n");
	}
	system("pause");
}
void LogIn()
{
	system("cls");
	printf("注册账号: ");
	buyerInputAdd();//输入信息
	system("cls");
	printf("注册成功!");
	buyerShow(buyerTail);
	system("cls");
}

*/













