#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void print_diamond(int a);
int main()
{
	print_diamond(13);
	system("pause");
	return 0;
}


void print_diamond(int a)
{
	for (int i = 1;i <= a;i++)
	{
		if (i <= (a/2))
		{
			for (int j = 0;j <= a / 2 - i;j++)
			{
				printf(" ");
			}
			
			for (int k = 1;k <= 2*i-1;k++)
			{
				printf("*");
			}
			printf("\n");
		}
		else
		{
			for(int b = a-i;b < a / 2;b++)
			{
				printf(" ");
			}
			for (int k = 1;k <=a-2*(i- (a / 2+1));k++)
			{
				printf("*");
			}
			printf("\n");
		}

	}
}