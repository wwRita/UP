#include<stdio.h>
#include<stdlib.h>
#include<windows.h>//暂停 
#include "userList.h"
void logIn();//注册 
void logOn();//登录 
void logOut();//输出 
void logMenu()
{
	char num;
	for (;;)
	{
		userBuild();
		system("cls");//清屏函数
		printf("\n\n\n\n\n\n\n");
		printf("                                                   ****************\n"); 
		printf("                                                   *   ->①注册   *\n");
		printf("                                                   *   ->②登陆   *\n");
		printf("                                                   *   ->③退出   *\n");
		printf("                                                   ****************\n");
		num=getch();//不输出的读取一个数 
		switch(num)
		{
		case '1':logIn();break;
		case '2':logOn();break;
		case '3':logOut();break;
		default:/*while(getchar()!='\r');*/printf("输入有误请重新输入\n");system("pause");//暂停  "请按任意键继续" 
		}
		getchar();
	}
}
void logIn()
{
	system("cls");
	printf("注册账号\n");
	userInput();//用户输入 
	system("pause");
}
void logOn()
{
	system("cls");
	printf("这是登陆\n");
	userOutput();//输出用户链表 
	system("pause");
}
void logOut()
{
	system("cls");
	printf("这是退出\n");
	system("pause");
}
