#include<stdio.h>
struct user_
{
	char name[10];
	char password[6];
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
}
void userInput() 
{
	userList n=(userList)malloc(sizeof(userNode));
	printf("�������û���: ");
	gets(n->name);
	printf("����������: ");
	gets(n->password);
	userAdd(n);//��ȡ�������� 
}
void userShow(userList L)//�����������
{
	puts(L->name);
	puts(L->password);
}
void userOutput()//���ȫ������   �������� 
{
	userList p;
	for(p=userHead->next;p!=NULL;p=p->next)
	{
		userShow(p);
	}
}
 
