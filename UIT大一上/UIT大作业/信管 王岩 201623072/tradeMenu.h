#include<stdio.h>
#include<stdlib.h>
#include<windows.h>//��ͣ 
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
		system("cls");//��������
		printf("\n\n\n\n\n\n\n");
		printf("                                                   ********************\n"); 
		printf("                                                   *   ->�������Ʒ   *\n");
		printf("                                                   *   ->��ɾ����Ʒ   *\n");
		printf("                                                   *   ->���޸���Ʒ   *\n");
		printf("                                                   *   ->�ܲ�����Ʒ   *\n");
		printf("                                                   *   ->����ʾ��Ʒ   *\n");
		printf("                                                   *   ->�����ص�¼   *\n");
		printf("                                                   ********************\n");
		num=getch();//������Ķ�ȡһ���� 
		switch(num)
		{
		case '1':tradeAdd();break;
		case '2':tradeDrop();break;
		case '3':tradeUpdate();break;
		case '4':tradeFind();break; 
		case '5':tradeOutput();break; 
		case '0':/*tradeOut();*/return;break;
		default:printf("������������������\n");system("pause");//��ͣ  "�밴���������" 
		}
	}
}
void tradeAdd()//����
{
	system("cls");
	printf("�����Ʒ\n");
	shopInputAdd();
	system("cls"); 
	printf("��ӳɹ�\n");
	shopShow(shopTail);
	system("pause"); 
} 
void tradeDrop()//ɾ��
{
	char name[20];
	shopList L;
	system("cls");
	printf("������Ҫɾ����Ʒ������:\n");
	gets(name);
	L=shopFind(name);
	if(L!=NULL)
	{
		shopShow(L);
		shopDrop(L);
		printf("ɾ���ɹ�\n");
	}
	else
	{
		printf("û�и���Ʒ\n");
	}
	system("pause");
	
} 
void tradeUpdate()//�޸�
{
	char name[20];
	shopList L;
	system("cls");
	printf("������Ҫ�޸���Ʒ������:\n");
	gets(name);
	L=shopFind(name);
	if(L!=NULL)
	{
		shopShow(L);
		shopInput(L);
	}
	else
	{
		printf("û�и���Ʒ\n");
	}
	system("pause");
	
}
 
void tradeFindName()
{
	char name[20];
	shopList L;
	system("cls");
	printf("������Ҫ������Ʒ������:\n");
	gets(name);
	L=shopFind(name);
	if(L!=NULL)
	{
		shopShow(L);
	}
	else
	{
		printf("û�и���Ʒ\n");
	}
	system("pause");
	
}
void tradeFindType()
{
	char type[20];
	system("cls");
	printf("������Ҫ������Ʒ������:\n");
	gets(type);
	if(shopFindOutput(type)!=1)
	{
		printf("û�и����͵���Ʒ\n");
	}
	system("pause");
}
void tradeFind()//����
{
	char num;
	system("cls");
	printf("������Ʒ\n");
	printf("��ѡ���ѯ��ʽ:\n");
	printf("�ٰ���Ʒ���Ʋ�ѯ\n�ڰ���Ʒ���Ͳ�ѯ\n");
	num=getch();
	switch(num)
	{
		case '1':tradeFindName();break;
		case '2':tradeFindType();break;
	}
} 
void tradeOutput()//���ȫ��
{
	system("cls");
	shopOutput();
	system("pause"); 
} 
//void tradeOut()
//{} 
