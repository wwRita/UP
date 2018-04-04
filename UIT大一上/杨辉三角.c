#include<stdio.h>
int main(void)
{
	int table[7][7];
	int hang;
	int lie;
	for(hang=0;hang<7;hang++)
	{
		for(lie=0;lie<=hang;lie++)
		{
			if(hang==lie||lie==0)
			{
				table[hang][lie]=1;
			}
			else 
			{
				table[hang][lie]=table[hang-1][lie-1]+table[hang-1][lie];
			}
		
		}
	}
	for(hang=0;hang<7;hang++)
	{
		for(lie=0;lie<=hang;lie++)
		{
			printf("%3d",table[hang][lie]);
		}
		printf("\n");
	}
	return 0;

}