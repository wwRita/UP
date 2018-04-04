/*#include<stdio.h>
buyShop();
buyerFind();
buyerDrop();
buyerOut();

void buyerMenu()
{
	char num;
	
	for (;;)
	{
		system("cls");//清屏函数
		printf("\n\n\n\n\n\n\n");
		printf("                                                   ********************\n"); 
		printf("                                                   *   ->①购买商品   *\n");// 里面包含查找商品，加入购物车，直接购买，计算价钱 
		printf("                                                   *   ->②查看订单   *\n");
		printf("                                                   *   ->③删除订单   *\n");
		printf("                                                   *   ->〇返回登录   *\n");
		printf("                                                   ********************\n");
		num=getch();//不输出的读取一个数 
		switch(num)
		{
		case '1':buyShop();break;
		case '2':buyerFind();break;
		case '3':buyerDrop();break;
		case '0':buyerOut();return;break;
		default:printf("输入有误请重新输入\n");system("pause");//暂停  "请按任意键继续" 
		}
	}
}
void buyerShop()
{
	buyerList L;
	char name[20];
	system("cls");
	buyerFindShop();//链表
	
	
}*/







