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
userList userHead;//定义头指针 
userList userTail;//定义尾指针 
void userBuild()//建立头节点 
{
	userHead=(userList)malloc(sizeof(userNode));
	userHead->next=NULL;
	userTail=userHead;
}
void userAdd(userList L)//链表增加(尾插法) 
{
	userTail->next=L;
	userTail=L;
	userTail->next=NULL; 
}
void userInput(userList L) 
{
	printf("请输入用户名: ");
	gets(L->name);
	printf("请输入密码: ");
	gets(L->password);
} 
void userInputAdd() 
{
	userList n=(userList)malloc(sizeof(userNode));
	userInput(n);
	userAdd(n);//调取链表增加 
}

void userShow(userList L)//输出单个结点 
{
	printf("账号为:%-10s",L->name); 
	printf("密码为:%-6s\n",L->password); 
}
void userOutput()//输出全部链表   遍历链表 
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
 
