#include<stdlib.h>
#include<windows.h>//暂停 
#include "userList.h"
#include"tradeMenu.h" 
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
		default:/*while(getchar()!='\r');*/printf("输入有误请重新输入\n");system("pause");//暂停  "请按任意键继续" 
		}
	}
}

void logOn()
{
	userNode N; 
	system("cls");
	printf("请登陆\n");
	userInput(&N); 
	//userAuthCode();
	if(userFind(N)==1)
	{
		printf("匹配成功 即将登录\n");
		system("pause");
		tradeMenu();
	} 
	else
	{
		printf("匹配失败 即将返回上一层\n");
	}
	system("pause");
}
void logIn()
{
	system("cls");
	printf("注册账号\n");
	userInputAdd();//用户输入 
	system("cls"); 
	printf("注册成功!\n");
	userShow(userTail); 
	system("pause");
}


