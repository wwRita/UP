#include<stdio.h>  
int main(void)
{
	int year,first,month,kong,week,day;
	int tian[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	printf("请输入年份: ");
	scanf("%d",&year);
	first=((year-1)*365+(year-1)/4-(year-1)/100+(year-1)/400+1)%7;
	if(year%4==0&&year%100!=0||year%400==0)
	{
		tian[1]=29;
	}
	for(month=1;month<=12;month++)
	{
		printf("========%d月========\n",month);
		printf("日 一 二 三 四 五 六\n");
		if(month==1)
		{
			week=first;
		}
		else
		{
			week=(week+tian[month-2])%7;
		}
		for(kong=1;kong<=week;kong++)
		{
			printf("   ");
		}
		for(day=1;day<=tian[month-1];day++)
		{
			printf("%-3d",day);
			if((kong+day)%7==1)
			{
				printf("\n");
			}
		}
		printf("\n\n");
	}
	return 0;
}