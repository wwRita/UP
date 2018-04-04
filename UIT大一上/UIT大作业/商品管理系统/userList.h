#include<stdio.h>
struct user_
{
	char name[10];
	char password[6];
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
}
void userInput() 
{
	userList n=(userList)malloc(sizeof(userNode));
	printf("请输入用户名: ");
	gets(n->name);
	printf("请输入密码: ");
	gets(n->password);
	userAdd(n);//调取链表增加 
}
void userShow(userList L)//输出单个链表
{
	puts(L->name);
	puts(L->password);
}
void userOutput()//输出全部链表   遍历链表 
{
	userList p;
	for(p=userHead->next;p!=NULL;p=p->next)
	{
		userShow(p);
	}
}
 
