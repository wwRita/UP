#ifndef SHOP_LIST_H
#define SHOP_LIST_H

#include<stdio.h>
struct shop_
{
	char name[20];
	double price;
	char type[20];
	int count;
	struct shop_ * next;
};
typedef struct shop_ shopNode;
typedef struct shop_ * shopList;//shopNode *p<=>shopList p 
shopList shopHead;//����ͷָ�� 
shopList shopTail;//����βָ�� 
void shopBuild()//����ͷ�ڵ� 
{
	shopHead=(shopList)malloc(sizeof(shopNode));
	shopHead->next=NULL;
	shopTail=shopHead;
}
void shopAdd(shopList L)//��������(β�巨) 
{
	shopTail->next=L;
	shopTail=L;
	shopTail->next=NULL; 
}
void shopInput(shopList L) 
{
	printf("��������Ʒ����: ");
	gets(L->name);
	printf("������۸�: ");
	scanf("%lf",&(L->price));
	getchar();
	printf("��������Ʒ����: ");
	gets(L->type);
	printf("��������Ʒ����:"); 
	scanf("%d",&(L->count)); 
	getchar();
} 
void shopInputAdd() 
{
	shopList n=(shopList)malloc(sizeof(shopNode));
	shopInput(n);
	shopAdd(n);//��ȡ�������� 
}

void shopShow(shopList L)//���������� 
{
	printf("��Ʒ����:%-15s ",L->name);
	printf("�۸�:%-8.2f",L->price);
	printf("��Ʒ����:%-15s ",L->type);
	printf("��Ʒ����:%-6d\n",L->count); 
}
void shopOutput()//���ȫ������   �������� 
{
	shopList p;
	for(p=shopHead->next;p!=NULL;p=p->next)
	{
		shopShow(p);
	}
}
void shopDrop(shopList L)//����ɾ�� 
{
	shopList p;
	for(p=shopHead;p->next!=L;p=p->next);
	p->next=L->next;
	free(L);

}
shopList shopFind(char *name)//������� 
{
	shopList p;
	for(p=shopHead->next;p!=NULL;p=p->next)
	{
		if(strcmp(name,p->name)==0)
		{
			return p;
		}
	}
	return NULL;
}
int shopFindOutput(char *type)
{
	int flag=0;
	shopList p;
	for(p=shopHead->next;p!=NULL;p=p->next)
	{
		if(strcmp(type,p->type)==0)
		{
			flag=1;
			shopShow(p);
		}
	}
	return flag;
}
#endif

