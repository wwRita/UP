/*#include<stdlib.h>
#include<windows.h>//��ͣ 
#include "buyerLogList.h"
#include"buyerTradeMenu.h" 
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
		default:printf("������������������\n");system("pause");//��ͣ  "�밴���������" 
		}
	}
}
void LogOn()
{
	buyerNode N;
	system("cls");
	printf("���½\n");
	buyerInput(&N); 
	if(buyerFind(N)==1)
	{
		printf("ƥ��ɹ� ������¼\n");
		system("pause");
		buyerTradeMenu();
	} 
	else
	{
		printf("ƥ��ʧ�� ����������һ��\n");
	}
	system("pause");
}
void LogIn()
{
	system("cls");
	printf("ע���˺�: ");
	buyerInputAdd();//������Ϣ
	system("cls");
	printf("ע��ɹ�!");
	buyerShow(buyerTail);
	system("cls");
}

*/













