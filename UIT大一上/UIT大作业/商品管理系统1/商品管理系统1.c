#include<stdio.h>
#include<windows.h>//���ߺ���
#include<conio.h>//��ͣ����
#include<string.h>
#include<stdlib.h>//�������
#include<time.h>
#define M 20 
/*******************************************************************************/
typedef struct shangpin
{
	char name[10];
	double price;
	char type[5];
	struct shangpin *next;
}shop;
typedef struct yonghu
{
	char ming[M];
	char mima1[M];
	char mima2[M];
	char mima3[M];

}user;
/********************************************************************************/
int zhuCe()//ע����֤�ɹ�����������
{
	user *p;
	int rand1,rand2,rand3;
	p=(user*)malloc(sizeof(user));
	/*char ming[M];
	char mima1[M];
	char mima2[M];
	char mima3[M];*/

	srand(time(NULL));
	rand1=rand()%9000+1000;//�������4λ��֤��

	printf("�������û���:");
	scanf("%s",p->ming);
	printf("\n����������:");
	scanf("%s",p->mima1);
	printf("\n��ȷ������:");
	scanf("%s",p->mima2);
	if(!strcmp(p->mima1,p->mima2))
	{
		printf("\n��֤��Ϊ:%d",rand1);
		printf("\n��������֤��:");
		scanf("%d",&rand2);
		if(rand1!=rand2)
		{
			printf("��֤�����!������������֤��:\n");
			scanf("%d",&rand3);
			if(rand3==rand1)
			{
				printf("ע��ɹ�!");
			}
		}
		else
		{
			printf("ע��ɹ�!");
		}
	}
	else
	{
		printf("�������!��������������:");
		scanf("%s",p->mima3);
		if(!strcmp(p->mima3,p->mima1))
		{
			printf("\n��֤��Ϊ:%d",rand1);
			printf("\n��������֤��:");
			scanf("%d",&rand2);
			if(rand1!=rand2)
			{
				printf("��֤�����!������������֤��:\n");
				scanf("%d",&rand3);
				if(rand3==rand1)
				{
					printf("ע��ɹ�!");
				}
			}
			else
			{
				printf("ע��ɹ�!");
			}
		}
	}
	
	return 0;
}
/****************************************************************************/
int logOn()//��½
{
	user* p;
	char username[M];
	char mima[M];
	printf("�������û���:");
	gets(username);
	printf("����������:");
	gets(mima);
	if(!strcmp(username,p->ming)&&!strcmp(mima,p->mima1))
	{
		printf("��½�ɹ�!");
	}
	else
	{
		printf("��½ʧ��!\n�����û����������Ƿ���ȷ!");
	}
	return 0;
}
/****************************************************************************/
int zeng(shop *head)//��
{
	shop *p;
	p=(shop*)malloc(sizeof(shop));
	printf("��������Ʒ����:");
	scanf("%s",p->name);
	printf("��������Ʒ���:");
	scanf("%s",p->type);
	printf("��������Ʒ�۸�:");
	scanf("%lf",&(p->price));
	p->next=head->next;
	head->next=p;
	return 0;
}
/****************************************************************************/
int shan(shop *head)//ɾ
{
	shop *p;//Ҫɾ����
	
	int i;
	p=(shop*)malloc(sizeof(shop));
	printf("��ѡ��ɾ����Ϣ�ķ�ʽ:\n");
	printf("�ٰ�����Ʒ����ɾ��\n�ڰ�����Ʒ���ɾ��\n�۰�����Ʒ�۸�ɾ��\n");
	scanf("%d",&i);
	switch(i)
	{
		case 1:printf("������Ҫɾ������Ʒ����:");scanf("%s",p->name);
		case 2:printf("������Ҫɾ������Ʒ���:");scanf("%s",p->type);
		case 3:printf("������Ҫɾ������Ʒ�۸�:");scanf("%lf",&(p->price));
	}
	p->next=NULL;
	free(p);
	
	return 0;
}
/***************************************************************************/
int cha(shop *head)//��   ���������
{
	shop* p;
	p=(shop*)malloc(sizeof(shop));
	for(p=head;p->next!=NULL;p=p->next)
	{
		printf("%s",p->name);
		printf("%s",p->type);
		printf("%f",&(p->price));
	}
	return 0;
}
/***************************************************************************/
int gai(shop* head)//��
{
	
	return 0;
}
/***************************************************************************/
int main()
{
	int num;
	int k;
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
	printf("************************************\n\n\n");
	Sleep(500);
	getch();//��ͣ����
	printf("��ע��\n�ڵ�½\n���˳�\n");
	scanf("%d",&num);
	switch(num)
	{
		case 1:zhuCe();break;
		case 2:logOn();break;
		case 3:break;
		default:break;
	}
	system("cls");//��������

	printf("��ע��\n�ڵ�½\n���˳�\n");
	scanf("%d",&num);
	switch(num)
	{
	case 1:zhuCe();break;
	case 2:logOn();break;
	case 3:break;
	default:break;
	}
	system("cls");
	printf("��������Ʒ\n��ɾ����Ʒ\n�۲�����Ʒ\n�ܸĶ���Ʒ\n���˳�");
	scanf("%d",&k);
	switch(k)
	{
		case 1:zeng(head);break;
		case 2:shan(head);break;
		case 3:cha(head);break;
		case 4:gai(head);break;
		case 5:break;
		default:break;
	}
	return 0;
} 
//����Ա����  �û�����
/*for(i=1;;i++)
	{
		printf("�������%d����Ʒ��Ϣ:",i);
		zeng(head);
	}*/