#include<stdio.h>
int main(void)
{
	int table[7][7];
	int hang;
	int lie;
	for(hang=0;hang<7;hang++)
	{
		for(lie=0;lie<7;lie++)
		{
			if(hang==lie||hang+lie==6)
			{
				table[hang][lie]=0;
			}
			else if(hang<lie&&hang+lie<6||hang>lie&&hang+lie>6)
			{
				table[hang][lie]=1;
			}
			else if(hang>lie&&hang+lie<6||hang<lie&&hang+lie>6)
			{
				table[hang][lie]=-1;
			}
		}
	}
	for(hang=0;hang<7;hang++)
	{
		for(lie=0;lie<7;lie++)
		{
			printf("%3d",table[hang][lie]);
		}
		printf("\n");
	}
	return 0;
}