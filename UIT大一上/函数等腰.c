#include <stdio.h>
/*  23.
*   ����������Ԥ����λ��������
*   ������Ķ�����λ��
*   ��ʹ��printf,ͬʱ����output����
*   ���ʵ��������
*/
void output(char ch,int n)
{
    int i;
    for(i=1;i<=n;i++)
        printf("%c",ch);
}
int main()
{
    int n;
    int i;
    scanf("%d",&n);
    /*********************************/
	for(i=1;i<=n;i++)
	{
		output(' ',n-i);
		output('*',2*i-1);
		output('\n',1);
	}


    /*********************************/
    return 0;
}
