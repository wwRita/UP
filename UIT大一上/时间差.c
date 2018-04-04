#include<stdio.h>
int main(void)
{
	int year1,year2,month1,month2,day1,day2,tiancha,n,i;
	int tian[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int nian[2]={365,366};
	
	printf("请输入第一个日期(格式为年-月-日):");
	scanf("%d-%d-%d",&year1,&month1,&day1);
	printf("请输入第二个日期(格式为年-月-日):");
	scanf("%d-%d-%d",&year2,&month2,&day2);

	if(year1%4==0&&year1%100!=0||year1%400==0)
	{
		tian[1]=29;
	}
	if(year2%4==0&&year2%100!=0||year2%400==0)
	{
		tian[1]=29;
	}
	if(year1==year2)
	{
		if(month1==month2)
		{
			tiancha=day1-day2;
			if(day1-day2<0)
			{
				tiancha=day2-day1;
			}
		}
		n=month1-month2;
		else if(month1-month2>1||month2-month1>1)
		{
			for(i=1;i<=n;i++)
			{
				tiancha=tian[month2]-day2+tian[month2+i]+day1;
			}
			
		}
	}
	return 0;
}
