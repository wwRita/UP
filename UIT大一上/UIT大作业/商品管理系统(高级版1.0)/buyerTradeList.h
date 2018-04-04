/*#ifndef BUYER_TRADE_LIST_H
#define BUYER_TRADE_LIST_H

#include<stdio.h>
struct buyer_
{
	char name[20];
	double price;
	char type[20];
	int count;
	struct buyer_ * next;
};
typedef struct buyer_ buyerNode;
typedef struct buyer_ * buyerList;//shopNode *p<=>shopList p 
shopList buyerHead;//定义头指针 
shopList buyerTail;//定义尾指针 
void buyerBuild()//建立头节点 
{
	buyerHead=(buyerList)malloc(sizeof(buyerNode));
	buyerHead->next=NULL;
	buyerTail=buyerHead;
}
void buyerAdd(buyerList L)//链表增加(尾插法) 
{
	buyerTail->next=L;
	buyerTail=L;
	buyerTail->next=NULL; 
}
*/
