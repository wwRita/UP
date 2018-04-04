#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include"userList.h"
#include"shopList.h"
#define T 5

void userFileAdd();
void shopFileAdd();

void begin()
{
	system("cls");
	system("color B");
	printf("\n\n\n\n\n\n");
	printf("                                         ************************************\n");
	Sleep(T);
	printf("                                         *                                  *\n");
	Sleep(T);
	printf("                                         *                                  *\n");
	Sleep(T);
	printf("                                         *       欢迎使用商品管理系统       *\n");
	Sleep(T);
	printf("                                         *                                  *\n");
	Sleep(T);
	printf("                                         *                                  *\n");
	Sleep(T);
	printf("                                         ************************************\n\n\n");
	Sleep(T);
	system("pause");
	userFileAdd();
	shopFileAdd();	
}
void userFileAdd()
{
	userList U;
	FILE *fUser;
	if((fUser=fopen("user.dat","rb"))!=NULL)
	{
		U=(userList)malloc(sizeof(userNode));
		while(fread(U,sizeof(userNode),1,fUser)==1)
		{
			userAdd(U);
			U=(userList)malloc(sizeof(userNode));
		}
		fclose(fUser);
		remove("user.dat");//清除文件
	}
	
}

void shopFileAdd()
{
	shopList S;
	FILE *fShop;
	if((fShop=fopen("shop.dat","rb"))!=NULL)
	{
		S=(shopList)malloc(sizeof(shopNode));
		while(fread(S,sizeof(shopNode),1,fShop)==1)
		{
			shopAdd(S);
			S=(shopList)malloc(sizeof(shopNode));
		}
		fclose(fShop);
		remove("shop.dat");
	}
}
