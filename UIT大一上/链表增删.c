#include <stdlib.h>
#include <stdio.h>
typedef struct stu
{	int no;
	char name[10];
	char gender[10];
	struct stu *next;
}STU;


/*---------------------------------------------------------------------------------------------------*/
/*41.����һ���µĽڵ�,�����ýڵ㸳ֵ*/
void ListInsert_L ( STU* head )
{
	STU *p,*q;//p�Ǵ�����
	/*����һ����㲢��ֵ*/
	p=(STU *)malloc(sizeof(STU));
	printf("������ѧ��: ");//�������Ϣ
	scanf("%d",&(p->no));
	printf("����������: ");
	scanf("%s",p->name);
	printf("�������Ա�: ");
	scanf("%s",p->gender);
	

	/*ͷ�巨*/
	
	p->next=head->next;
	head->next=p;
	
	/*β�巨*/
	/*
	for(q=head;q->next!=NULL;q=q->next);
	p->next=q->next;
	q->next=p;*/


}
/*---------------------------------------------------------------------------------------------------*/
/*42.ɾ����n���ڵ�,�ͷ��ڴ�ռ� */
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

/*43.����������е�Ԫ��*/
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
	/*��������,����һ���յ�ͷ�ڵ�,ʹheadָ�������ͷ�ڵ�*/
	head=(STU *)malloc(sizeof(STU));
	head->next=NULL;

	/*����n,�������д���n��ѧ����Ϣ*/
	//ѭ����ȡListInsert_L
	printf("������ѧ���ĸ���: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("\n�������%d��ѧ������Ϣ:",i);
		ListInsert_L(head);
	}
	/*printf("�Ƿ�Ҫ������Ϣyes/no: ");
	scanf("%s",&b);
	if(b=="yes")
	{
		ListInsert_L(head);
	}*/
	
	/*���������Ϣ*/
 	display(head);
	/*����nɾ�������е�n���ڵ�*/
	//printf("������Ҫɾ���ڼ������: ");
	//scanf("%d",&n);
	//ListDelete_L(head,n);	
	/*���������Ϣ*/
	display(head);

	return 0;
}
