#include<stdio.h>
int main()
{
    int num[10];
    int *p[10];
    int i; 
    for(i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
    }
/******************************/







/*******************************/
    for(i=0;i<10;i++)
    {
        printf("%d",*p[i]);
    }
    return 0;
}
