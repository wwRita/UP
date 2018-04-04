#include<stdio.h>
/*  25.
*   在预留的位置添加函数
*   不允许改动其他位置
*   不使用循环,同时利用函数
*   求出n的阶乘
*/
/***********************************/
int product(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return(n*product(n-1));
	}
	
}


/***********************************/
int main()
{
    int n;
    int result;
    scanf("%d",&n);
    result=product(n);/*函数名为product*/
    printf("%d",result);
    return 0;
}
