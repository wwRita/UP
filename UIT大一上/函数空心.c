#include <stdio.h>
/*  24.
*   ����������Ԥ����λ��������
*   ������Ķ�����λ��
*   ��ʹ��printf,ͬʱ����output����
*   �������������
*/
void output(char ch,int n)
{
    int i;
    for(i=1;i<=n;i++)
        printf("%c",ch);
}
int main()
{
    int n,m;
    int i;
    scanf("%d",&n);
    /*********************************/
	for(i=1;i<n;i++)
	{
		output(' ',n-i);
		
		output('*',1);
		output(' ',2*i-3);
		if(i!=1)
		{
			output('*',1);
		}
	
		output('\n',1);
	}
		output('*',2*i-1);
	
    /*********************************/
    return 0;
}
