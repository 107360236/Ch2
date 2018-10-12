#include <stdio.h>
#include <stdlib.h>

int Han_Xin_4(void)
{
	int temp = 1;
	int temp2 = 8;
	int i, j;
	char sign, sign2;
	sign = 'X';
	sign2 = '-';
	printf("(4) \n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i > 0) && (i < 5) && (j == temp))
			{
				printf("%c", sign);
			}
			else if ((i > 0) && (i < 5) && (j == temp2))
			{
				temp++;
				printf("%c", sign);
				temp2--;
			}
			else if (i == 0)
			{
				printf("%c", sign);
			}
			else
			{
				printf("%c", sign2);
			}
		}
		printf("\n");
	}
}