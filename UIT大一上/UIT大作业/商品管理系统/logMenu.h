#include<stdio.h>
#include<stdlib.h>
#include<windows.h>//��ͣ 
#include "userList.h"
void logIn();//ע�� 
void logOn();//��¼ 
void logOut();//��� 
void logMenu()
{
	char num;
	for (;;)
	{
		userBuild();
		system("cls");//��������
		printf("\n\n\n\n\n\n\n");
		printf("                                                   ****************\n"); 
		printf("                                                   *   ->��ע��   *\n");
		printf("                                                   *   ->�ڵ�½   *\n");
		printf("                                                   *   ->���˳�   *\n");
		printf("                                                   ****************\n");
		num=getch();//������Ķ�ȡһ���� 
		switch(num)
		{
		case '1':logIn();break;
		case '2':logOn();break;
		case '3':logOut();break;
		default:/*while(getchar()!='\r');*/printf("������������������\n");system("pause");//��ͣ  "�밴���������" 
		}
		getchar();
	}
}
void logIn()
{
	system("cls");
	printf("ע���˺�\n");
	userInput();//�û����� 
	system("pause");
}
void logOn()
{
	system("cls");
	printf("���ǵ�½\n");
	userOutput();//����û����� 
	system("pause");
}
void logOut()
{
	system("cls");
	printf("�����˳�\n");
	system("pause");
}
