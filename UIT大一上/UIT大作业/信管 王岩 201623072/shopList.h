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
shopList shopHead;//定义头指针 
shopList shopTail;//定义尾指针 
void shopBuild()//建立头节点 
{
	shopHead=(shopList)malloc(sizeof(shopNode));
	shopHead->next=NULL;
	shopTail=shopHead;
}
void shopAdd(shopList L)//链表增加(尾插法) 
{
	shopTail->next=L;
	shopTail=L;
	shopTail->next=NULL; 
}
void shopInput(shopList L) 
{
	printf("请输入商品名称: ");
	gets(L->name);
	printf("请输入价格: ");
	scanf("%lf",&(L->price));
	getchar();
	printf("请输入商品种类: ");
	gets(L->type);
	printf("请输入商品数量:"); 
	scanf("%d",&(L->count)); 
	getchar();
} 
void shopInputAdd() 
{
	shopList n=(shopList)malloc(sizeof(shopNode));
	shopInput(n);
	shopAdd(n);//调取链表增加 
}

void shopShow(shopList L)//输出单个结点 
{
	printf("商品名称:%-15s ",L->name);
	printf("价格:%-8.2f",L->price);
	printf("商品种类:%-15s ",L->type);
	printf("商品数量:%-6d\n",L->count); 
}
void shopOutput()//输出全部链表   遍历链表 
{
	shopList p;
	for(p=shopHead->next;p!=NULL;p=p->next)
	{
		shopShow(p);
	}
}
void shopDrop(shopList L)//链表删除 
{
	shopList p;
	for(p=shopHead;p->next!=L;p=p->next);
	p->next=L->next;
	free(L);

}
shopList shopFind(char *name)//链表查找 
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

