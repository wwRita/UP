#include<stdio.h>
/*  25.
*   ��Ԥ����λ����Ӻ���
*   ������Ķ�����λ��
*   ��ʹ��ѭ��,ͬʱ���ú���
*   ���n�Ľ׳�
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
    result=product(n);/*������Ϊproduct*/
    printf("%d",result);
    return 0;
}
