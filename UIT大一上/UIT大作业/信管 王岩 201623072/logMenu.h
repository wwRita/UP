#include<stdlib.h>
#include<windows.h>//��ͣ 
#include "userList.h"
#include"tradeMenu.h" 
void logOn();//��¼ 
void logIn();//ע�� 

void logMenu()
{
	char num;
	
	for (;;)
	{
		system("cls");//��������
		printf("\n\n\n\n\n\n\n");
		printf("                                                   ****************\n"); 
		printf("                                                   *   ->�ٵ�½   *\n");
		printf("                                                   *   ->��ע��   *\n");
		printf("                                                   *   ->���˳�   *\n");
		printf("                                                   ****************\n");
		num=getch();//������Ķ�ȡһ���� 
		switch(num)
		{
		case '1':logOn();break;
		case '2':logIn();break;
		case '0':return;break;
		default:/*while(getchar()!='\r');*/printf("������������������\n");system("pause");//��ͣ  "�밴���������" 
		}
	}
}

void logOn()
{
	userNode N; 
	system("cls");
	printf("���½\n");
	userInput(&N); 
	//userAuthCode();
	if(userFind(N)==1)
	{
		printf("ƥ��ɹ� ������¼\n");
		system("pause");
		tradeMenu();
	} 
	else
	{
		printf("ƥ��ʧ�� ����������һ��\n");
	}
	system("pause");
}
void logIn()
{
	system("cls");
	printf("ע���˺�\n");
	userInputAdd();//�û����� 
	system("cls"); 
	printf("ע��ɹ�!\n");
	userShow(userTail); 
	system("pause");
}


