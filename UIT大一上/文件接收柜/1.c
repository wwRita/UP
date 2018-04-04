#include<stdio.h>
/******************************/
void sort()
{
	
	return;
}
/*******************************/
int main()
{
    int num[50];
    int n;
    int i;
    printf("请输入数字个数:");
    scanf("%d",&n);
    printf("请输入%d个数:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    sort();//内容自行填写
    for(i=0;i<n;i++)
    {
        printf("%d",num[i]);
    }
    return 0;
}
