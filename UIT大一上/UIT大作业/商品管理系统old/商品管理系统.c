#include<stdio.h>
#include<windows.h>//���ߺ���
#include<conio.h>//��ͣ����
#include<string.h>
#include<stdlib.h>//�������
#include<time.h>
#define M 10 
typedef struct shangpin
{
	char name[10];
	double price;
	char type[5];
	struct shangpin *next;
}shop;
int zhuCe()//ע��
{
	int rand1,rand2,rand3;
	char ming[M];
	char mima1[M];
	char mima2[M];
	char mima3[M];
	srand(time(NULL));
	rand1=rand()%9000+1000;
	printf("�������û���:");
	scanf("%s",ming);
	printf("\n����������:");
	scanf("%s",mima1);
	printf("\n��ȷ������:");
	scanf("%s",mima2);
	if(!strcmp(mima1,mima2))
	{
		printf("\n��֤��Ϊ:%d",rand1);
		printf("\n��������֤��:");
		scanf("%d",&rand2);
		if(rand1!=rand2)
		{
			printf("��֤�����!������������֤��:\n");
			scanf("%d",&rand3);
		}
		else
		{
			printf("ע��ɹ�!");
		}
	}
	else
	{
		printf("�������!��������������:");
		scanf("%s",mima3);
	}
	printf("\n��֤��Ϊ:%d",rand1);
	printf("\n��������֤��:");
	scanf("%d",&rand2);
	if(rand1!=rand2)
	{
		printf("��֤�����!������������֤��:\n");
		scanf("%d",&rand3);
	}
	else
	{
		printf("ע��ɹ�!");
	}
	return 0;
}
/*int logOn()//��½
{
	char username[M];
	char mima[M];
	printf("�������û���:");
	gets(username);
	printf("����������:");
	gets(mima);
	if(!strcmp(username,ming)&&!strcmp(mima,mima1))
	{
		printf("��½�ɹ�!");
	}
	else
	{
		printf("��½ʧ��!\n�����û����������Ƿ���ȷ!");
	}
	return 0;
}
/*int zeng(shop *head)//��
{
	shop *p;
	p=(shop*)malloc(sizeof(shop));
	printf("��������Ʒ����:");
	scanf("%s",p->name);
	printf("��������Ʒ���:");
	scanf("%s",p->type);
	printf("��������Ʒ�۸�:");
	scanf("%lf",&price);
	p->next=head->next;
	head->next=p;
	return 0;
}
int shan(shop *head)//ɾ
{
	shop *p;
	int i;
	p=(shop*)malloc(sizeof(shop));
	printf("��ѡ��ɾ����Ϣ�ķ�ʽ:\n");
	printf("�ٰ�����Ʒ����ɾ��\n�ڰ�����Ʒ���ɾ��\n");
	scanf("%d",&i);
	switch(i)
	{
		case 1:printf("������Ҫɾ������Ʒ����:");

	}
	return 0;
}
int cha(shop *head)//��
{

	return 0;
}*/
int main()
{
	int num;
	int i;
	shop *head;
	head=(shop*)malloc(sizeof(shop));
	head->next=NULL;

	system("color B");
	printf("************************************\n");
	Sleep(500);
	printf("*                                  *\n");
	Sleep(500);
	printf("*                                  *\n");
	Sleep(500);
	printf("*       ��ӭʹ����Ʒ����ϵͳ       *\n");
	Sleep(500);
	printf("*                                  *\n");
	Sleep(500);
	printf("*                                  *\n");
	Sleep(500);
	printf("************************************\n\n\n\n");
	Sleep(500);
	getch();//��ͣ���� 
	printf("��ע��\n���˳�\n");
	scanf("%d",&num);
	switch(num)
	{
		case 1:zhuCe();break;
		//case 2:logOn();break;
		case 3:break;
	}
	/*for(i=1;;i++)
	{
		printf("�������%d����Ʒ��Ϣ:",i);
		zeng(head);
	}*/
	return 0;
} 
//����Ա����  �û�����
