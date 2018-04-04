#include <stdio.h>
/*  23.
*   在主函数中预留的位置添加语句
*   不允许改动其他位置
*   不使用printf,同时利用output函数
*   输出实心三角形
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
