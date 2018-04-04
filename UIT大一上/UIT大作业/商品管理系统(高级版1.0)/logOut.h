#include<stdio.h>
#include"userList.h"
#include"shopList.h"
void logOut()
{
	FILE *fUser;
	FILE *fShop; 
	shopList S;
	userList U;
	system("cls");
	system("color B");
	printf("\n\n\n\n\n\n");
	printf("                                         ************************************\n");
	Sleep(T);
	printf("                                         *                                  *\n");
	Sleep(T);
	printf("                                         *                                  *\n");
	Sleep(T);
	printf("                                         *       谢谢使用商品管理系统       *\n");
	Sleep(T);
	printf("                                         *                                  *\n");
	Sleep(T);
	printf("                                         *                                  *\n");
	Sleep(T);
	printf("                                         ************************************\n\n\n");
	Sleep(T);
	system("pause");
	fShop=fopen("shop.dat","ab");
	for(S=shopHead->next;S!=NULL;S=S->next)
	{
		fwrite(S,sizeof(shopNode),1,fShop);
	}
	fclose(fShop);
	fUser=fopen("user.dat","ab");
	for(U=userHead->next;U!=NULL;U=U->next)
	{
		fwrite(U,sizeof(userNode),1,fUser);
	}
	fclose(fUser);
}
