/*#ifndef BUYER_LOG_LIST_H
#define BUYER_LOG_LIST_H

#include<stdio.h>

struct buyer_
{
	char name[10];
	char password[7];
	struct buyer_ * next;
};
typedef struct user_ buyerNode;
typedef struct user_ * buyerList;
buyerList buyerHead;
buyerList buyerTail;

void buyerBuild()
{
	buyerHead=(buyerList)malloc(sizeof(buyerNode));
	buyerHead->next=NULL;
	buyerTail=buyerHead;
}
void buyerAdd(buyerList L)//��������(β�巨) 
{
	buyerTail->next=L;
	buyerTail=L;
	buyerTail->next=NULL; 
}
void buyerInput(buyerList L) 
{
	printf("�������û���: ");
	gets(L->name);
	printf("����������: ");
	gets(L->password);
} 
void buyerInputAdd() 
{
	buyerList n=(buyerList)malloc(sizeof(buyerNode));
	buyerInput(n);
	buyerAdd(n);//��ȡ�������� 
}

void buyerShow(buyerList L)//���������� 
{
	printf("�˺�Ϊ:%-10s",L->name); 
	printf("����Ϊ:%-6s\n",L->password); 
}
void buyerOutput()//���ȫ������   �������� 
{
	buyerList p;
	for(p=buyerHead->next;p!=NULL;p=p->next)
	{
		buyerShow(p);
	}
}
int buyerMate(char *Achar,char *Bchar)
{
	if(strcmp(Achar,Bchar)==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


int buyerFind(buyerNode N)
{
	buyerList p;
	for(p=buyerHead->next;p!=NULL;p=p->next)
	{
		if(buyerMate(N.name,p->name)&&buyerMate(N.password,p->password))
		{
			return 1;
		}
	}
	return 0;
} 
#endif*/
 
