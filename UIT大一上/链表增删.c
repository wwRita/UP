#include <stdlib.h>
#include <stdio.h>
typedef struct stu
{	int no;
	char name[10];
	char gender[10];
	struct stu *next;
}STU;


/*---------------------------------------------------------------------------------------------------*/
/*41.增加一个新的节点,并给该节点赋值*/
void ListInsert_L ( STU* head )
{
	STU *p,*q;//p是待插入
	/*建立一个结点并赋值*/
	p=(STU *)malloc(sizeof(STU));
	printf("请输入学号: ");//插入的信息
	scanf("%d",&(p->no));
	printf("请输入名字: ");
	scanf("%s",p->name);
	printf("请输入性别: ");
	scanf("%s",p->gender);
	

	/*头插法*/
	
	p->next=head->next;
	head->next=p;
	
	/*尾插法*/
	/*
	for(q=head;q->next!=NULL;q=q->next);
	p->next=q->next;
	q->next=p;*/


}
/*---------------------------------------------------------------------------------------------------*/
/*42.删除第n个节点,释放内存空间 */
void ListDelete_L(STU* head ,int n)
{
	STU *q=head;
	STU *p;
	int k=1;
	q=(STU *)malloc(sizeof(STU));

	while(q->next!=NULL&&k<n)
	{
		if(n==1)
		{
			head=q->next;
			free(q);
		}
		else if(q->next==NULL)
		{
			p->next=NULL;
			free(q);
		}
		else
		{
			p->next=q->next;
			free(q);
			q=q->next;
			k++;
		}
		
	}
} 
/*---------------------------------------------------------------------------------------------------*/

/*43.输出单链表中的元素*/
void display(STU* head )
{
	STU *p;
	for(p=head->next;p!=NULL;p=p->next)
	{
		printf("%d    ",p->no);
		printf("%s    ",p->name);
		printf("%s\n",p->gender);
	
	}
}
/*---------------------------------------------------------------------------------------------------*/
int main()
{ 
	STU* head ;
	int i,num;
	char b[5];
	/*建立链表,建立一个空的头节点,使head指向链表的头节点*/
	head=(STU *)malloc(sizeof(STU));
	head->next=NULL;

	/*输入n,向链表中存入n个学生信息*/
	//循环调取ListInsert_L
	printf("请输入学生的个数: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("\n请输入第%d个学生的信息:",i);
		ListInsert_L(head);
	}
	/*printf("是否要插入信息yes/no: ");
	scanf("%s",&b);
	if(b=="yes")
	{
		ListInsert_L(head);
	}*/
	
	/*输出链表信息*/
 	display(head);
	/*输入n删掉链表中第n个节点*/
	//printf("请输入要删除第几个结点: ");
	//scanf("%d",&n);
	//ListDelete_L(head,n);	
	/*输出链表信息*/
	display(head);

	return 0;
}
