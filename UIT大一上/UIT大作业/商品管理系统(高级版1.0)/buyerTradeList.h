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
shopList buyerHead;//����ͷָ�� 
shopList buyerTail;//����βָ�� 
void buyerBuild()//����ͷ�ڵ� 
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
*/
