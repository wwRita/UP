#ifndef USER_LIST_H
#define USER_LIST_H

#include<stdio.h>

struct user_
{
	char name[10];
	char password[7];
	struct user_ * next;
};
typedef struct user_ userNode;
typedef struct user_ * userList;//userNode *p<=>userList p 
userList userHead;//����ͷָ�� 
userList userTail;//����βָ�� 
void userBuild()//����ͷ�ڵ� 
{
	userHead=(userList)malloc(sizeof(userNode));
	userHead->next=NULL;
	userTail=userHead;
}
void userAdd(userList L)//��������(β�巨) 
{
	userTail->next=L;
	userTail=L;
	userTail->next=NULL; 
}
void userInput(userList L) 
{
	printf("�������û���: ");
	gets(L->name);
	printf("����������: ");
	gets(L->password);
} 
void userInputAdd() 
{
	userList n=(userList)malloc(sizeof(userNode));
	userInput(n);
	userAdd(n);//��ȡ�������� 
}

void userShow(userList L)//���������� 
{
	printf("�˺�Ϊ:%-10s",L->name); 
	printf("����Ϊ:%-6s\n",L->password); 
}
void userOutput()//���ȫ������   �������� 
{
	userList p;
	for(p=userHead->next;p!=NULL;p=p->next)
	{
		userShow(p);
	}
}
int userMate(char *Achar,char *Bchar)
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


int userFind(userNode N)
{
	userList p;
	for(p=userHead->next;p!=NULL;p=p->next)
	{
		if(userMate(N.name,p->name)&&userMate(N.password,p->password))
		{
			return 1;
		}
	}
	return 0;
} 
#endif
 
