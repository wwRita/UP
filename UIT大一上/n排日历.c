#include<stdio.h>
int main(void)
{
	int year,first,n,month,a,week,kong,flag;
	int tian[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int ri[31]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
	printf("请输入年份: ");
	scanf("%d",&year);
	printf("请输入列数: ");
	scanf("%d",&n);
	first=((year-1)*365+(year-1)/4-(year-1)/100+(year-1)/400+1)%7;
	if(year%4==0&&year%100!=0||year%400==0)
	{
		tian[1]=29;
	}
	for(month=1;month<=n;month++)
	{
		printf("%12d月",month);
	}
	printf("\n");
	for(month=1;month<=n;month++)
	{
		printf("日 一 二 三 四 五 六 ");
	}
	printf("\n");	
	
	for(month=1;month<=n;month++)
	{
		for(a=0;a<31;a++)
		{
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
			printf("%d",ri[a]);
			if((kong+tian[a])%7==1)
			{
				printf("  ");
				flag=0;
			}
		}
	}
	
	return 0;
}
/*1月                    2月                     3月
日 一 二 三 四 五 六   日 一 二 三 四 五 六    日 一 二 三 四 五 六
				1  2       1  2  3  4  5  6           1  2  3  4  5
3  4  5  6  7  8  9    7  8  9  10 11 12 13    6  7  8  9  10 11 12
10 11 12 13 14 15 16
17 18 19 20 21 22 23
24 25 26 27 28 29 30
31
*/


  

/*for(k=1;k<=n;k++)
{
	for(a=1;a<=n;a++)
	{
		for(month=1;month<=n;month++)
		{
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
			for(b=0;b<31;b++)
			{
				printf("%d",ri[b]);
				if((kong+ri[b])%7==1)
				{
					printf("  ");
				}
			}
		}
	}
	*/	