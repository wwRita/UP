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
    printf("���������ָ���:");
    scanf("%d",&n);
    printf("������%d����:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    sort();//����������д
    for(i=0;i<n;i++)
    {
        printf("%d",num[i]);
    }
    return 0;
}
